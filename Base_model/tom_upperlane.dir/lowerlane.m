begin P_SurfaceTreatment arriving procedure
    if OL_WaitForBatch current < VI_BatchSize-1 then 
        begin
            wait to be ordered on OL_WaitForBatch
            move into Q_DummySurface
            wait to be ordered on OL_WaitBatchSurface
            move into Q_DummyUnloadingArea
            wait to be ordered on OL_WaitBatchUnloading
            send to P_Cooling
        end

    order VI_BatchSize-1 from OL_WaitForBatch to continue
    move into Q_Surface

    if VI_NumberCycles = 4 then
        begin
            wait for uniform 550, 100 sec //Refill liquid
            set VI_NumberCycles = 0
        end

    use R_Surface for 700 sec
    inc VI_NumberCycles by 1

    if Q_DummyUnloadingArea current > 0 then
        wait to be ordered on OL_WaitUnloadingArea

    order VI_BatchSize - 1 loads from OL_WaitBatchSurface to continue
    move into Q_UnloadingArea

    use R_TnSoperator for 5 sec
    order VI_BatchSize - 1 loads from OL_WaitBatchUnloading to continue
    send to P_Cooling
end

begin P_Cooling arriving procedure
    move into Q_Cooling
    if Q_UnloadingArea current = 0 and Q_DummyUnloadingArea current = 0 then
        order 1 load from OL_WaitUnloadingArea to continue

    wait for uniform 10, 1 min
    send to P_Measure
end

begin P_Measure arriving procedure
    move into Q_Measure
    wait for 80 sec //Loading time
    if this load type = L_Product40 then    
        set AI_ProdType = 1 
    if this load type = L_Product46 then    
        set AI_ProdType = 2
    if this load type = L_Product49 then    
        set AI_ProdType = 3

    if AI_ProdType != VI_PrevMeasure then
        wait for uniform 72.5, 12.5 sec //Set up time between different product types

    set VI_PrevMeasure = AI_ProdType

    use R_Measure for 295 sec //Measuring time

    send to P_SurfaceInspection
end

begin P_SurfaceInspection arriving procedure
    move into Q_SurfaceInspection
    use R_Inspector for uniform 4.25, 0.75 min
    set AI_InspectionResult = oneof(5:0,95:1)
    if AI_InspectionResult = 0
        send to die
    send to P_Packaging
end

begin P_Packaging arriving procedure
    move into Q_Packaging //TODO: Check in the Queue pallet that initial capacity = infinity
    if this load type = L_Product40 then    
        inc C_Product40 by 1  
    if this load type = L_Product46 then    
        inc C_Product46 by 1 
    if this load type = L_Product49 then    
        inc C_Product49 by 1 
    send to die
end

