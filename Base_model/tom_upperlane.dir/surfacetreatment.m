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
	        wait for uniform 545, 95 sec //Refill liquid
	        set VI_NumberCycles = 0
        end

    use R_Surface for 700 sec
    order VI_BatchSize - 1 loads from OL_WaitBatchSurface to continue
    move into Q_UnloadingArea
    use R_TnSoperator for 5 sec
    order VI_BatchSize - 1 loads from OL_WaitBatchUnloading to continue
    send to P_Cooling
end

begin P_Cooling arriving procedure
    move into Q_final
    send to die
end

