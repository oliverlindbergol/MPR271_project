begin model initialization function
    //create a load who will start the code
    create 1 load of load type L_Init to P_Init
    //create loads for breakdowns
	create 2 loads of load type L_DownCutters to P_DownTimeCutters
    create 1 load of load type L_DownPolisher to P_DownTimePolisher
    create 3 loads of load type L_DownPolishers to P_DownTimePolishers
	create 1 loads of load type L_DownTurner1 to P_DownTimeTurner1
	create 1 loads of load type L_DownTurner2 to P_DownTimeTurner2
	create 1 loads of load type L_DownGrinder1 to P_DownTimeGrinder1
	create 1 loads of load type L_DownGrinder2 to P_DownTimeGrinder2
	create 1 load of type L_DownTimeMeasure to P_DownTimeMeasure
    return 0
end

begin P_Init arriving procedure
    /* Set cycle times for Polisher */
    //Constant cycle time
    set VI_CycleTimePolisher(1) = 490
    set VI_CycleTimePolisher(2) = 540
    set VI_CycleTimePolisher(3) = 570
    
    set VI_ArrivingTime = 8
    set VI_PipeLength = 42
    set VI_LoadingTime = 160
    set VI_FixtureTravelTime = 5

    set VI_BatchSize = 7

    set Q_WareHouse capacity = 50
    set Q_Buffer1 capacity = 4
    set Q_Buffer2 capacity = 2
    set Q_Buffer3 capacity = 7
    set Q_Buffer40 capacity = 8
    set Q_Buffer46 capacity = 8
    set Q_Buffer49 capacity = 8
    set Q_Fixture capacity = 3
    set Q_Conveyor capacity = 3
    set Q_FixtureInPolisher capacity = 3
    set Q_UnloadingArea capacity = 7
    set Q_DummyUnloadingArea capacity = VI_BatchSize-1
    set Q_DummySurface capacity = VI_BatchSize-1
    set Q_Cooling capacity = 9


   

	set VI_Numberofcuts(1) = 9 // type 4.0
	set VI_Numberofcuts(2) = 8 // type 4.6
	set VI_Numberofcuts(3) = 7	// type 4.9

	set VI_MAXbefortoolchange = 8000
    
    
    //send load to creation process
    create 1 load of load type L_Pipe to P_RawMaterialArrival
    create 3 loads of load type L_Fixture to P_Loading
end

begin P_RawMaterialArrival arriving procedure
    //Create loads to P_Cutting
    while 1=1 begin
        clone 10 loads to P_WareHouse
        wait for VI_ArrivingTime hr
    end
end

begin P_WareHouse arriving procedure
    move into Q_WareHouse
	if Q_Cutter(1)remaining space = 0 and Q_Cutter(2)remaining space = 0 then  
   		 wait to be ordered on OL_WaitForCutter
    send to P_Cutter
end
/*-------------FAKE CUTTER-----------*/
/*begin P_Cutter arriving procedure
    move into Q_Cutter
    create 1 load of type L_Product40 to P_Polisher
    create 1 load of type L_Product46 to P_Polisher
    create 1 load of type L_Product49 to P_Polisher
    order 1 load from OL_WaitForCutter to continue
    send to die
end

/*-------------FAKE CUTTER-----------*/

*/

