begin model initialization function
	//create a load who will start the code
	create 1 load of load type L_Init to P_Init
	create 1 load of load type L_DownPainting to P_DownTimePainting
	create 2 loads of load type L_DownCutters to P_DownTimeCutters
	create 3 loads of load type L_DownLathes to P_DownTimeLathes
	return 0
end

//Test change 1
//Test change 2

begin P_Init arriving procedure
	/* Set cycle times for Cutters */
	//Triagular min, mode,max
	set VI_CycleTimeCutter(1,1) = 5
	set VI_CycleTimeCutter(1,2) = 8
	set VI_CycleTimeCutter(1,3) = 10
	
	//Triagular min, mode,max
	set VI_CycleTimeCutter(2,1) = 5
	set VI_CycleTimeCutter(2,2) = 8
	set VI_CycleTimeCutter(2,3) = 9
	
	/* Set setup times for Cutters */
	//Normal mean, std
	set VI_SetupCutter(1,1) = 240
	set VI_SetupCutter(1,2) = 7
	set VI_SetupCutter(2,1) = 260
	set VI_SetupCutter(2,2) = 5
	
	set VI_ArrivingTime(1) = 85
	set VI_ArrivingTime(2) = 80
	
	set Q_DummyPainting capacity = VI_BatchSize - 1
	set Q_PaintingUnloading capacity = VI_BatchSize
	set Q_BufferPainting capacity = VI_BatchSize
	
	//send load to creation process
	create 1 load of load type L_TubeA to P_Creation
	create 1 load of load type L_TubeB to P_Creation
end

begin P_Creation arriving procedure
	if this load type = L_TubeA then
		set AI_Type = 1
	else
		set AI_Type = 2
	
	//Create loads to P_Cutting
	while 1=1 begin
		clone 1 load to P_Cutting
		wait for VI_ArrivingTime(AI_Type) min
	end
end

begin P_Cutting arriving procedure
	/* choose the queue with the minimum number of loads 
	choose a queue from among Q_BufferCutter(1), Q_BufferCutter(2)
		whose current loads is minimum
		save choice as A_QptrCutter
	move into A_QptrCutter
	set AI_CutterIndex = A_QptrCutter index
	move into Q_Cutter(AI_CutterIndex)
	*/
	
	/*Try not to alternate products and cutters*/
	if this load type = L_TubeA then
		set AI_CutterIndex = 1
	else
		set AI_CutterIndex = 2
	move into Q_Cutter(AI_CutterIndex)
	
	/* setup time if needed */
	if VI_PrevType (AI_CutterIndex) != AI_Type then
		use R_Cutter(AI_CutterIndex) for normal
VI_SetupCutter(AI_Type,1), VI_SetupCutter(AI_Type,2) sec
	
	/* cutting process */
	while AI_Cuts < 10 do begin
		use R_Cutter(AI_CutterIndex) for triangular
VI_CycleTimeCutter(AI_Type,1), VI_CycleTimeCutter(AI_Type,2),
VI_CycleTimeCutter(AI_Type,3) min
		if Q_BufferPainting remaining space < 1 then
 			wait to be ordered on OL_PaintBufferFull 
		create 1 load of type L_Product to P_Painting
		inc AI_Cuts by 1
	end
	
	/* update previous type */
	set VI_PrevType (AI_CutterIndex) = AI_Type
	
	/* The tube finished after being cut into 10 parts */
	send to die
end

begin P_Painting arriving procedure
	move into Q_BufferPainting
	
	/* Introduce batches */ 
	if OL_PaintBatch current < VI_BatchSize-1 then begin
		wait to be ordered on OL_PaintBatch
		move into Q_DummyPainting
		wait to be ordered on OL_WaitBatchPainting
		send to P_Unloading
	end
	
	order VI_BatchSize-1 from OL_PaintBatch to continue
	move into Q_Painting
	
	order VI_BatchSize load from OL_PaintBufferFull to continue
	
	/* setup time */
	use R_Painting for uniform 85, 15 sec
	
	/* cycle time */
	use R_Painting for (normal 3, 0.2)*VI_BatchSize min
	
	if Q_PaintingUnloading current > 0 then begin
 		wait to be ordered on OL_PaintingUnloading
 	end 
	
	move into Q_PaintingUnloading
	
	order VI_BatchSize - 1 loads from OL_WaitBatchPainting to continue
		
	send to P_Lathes
end

begin P_Unloading arriving procedure
	move into Q_PaintingUnloading
	send to P_Lathes
end

begin P_Lathes arriving procedure
	/* choose the Lathe which is least busy */
	choose a queue from among Q_BufferLathe(1), Q_BufferLathe(2),
Q_BufferLathe(3)
		whose current loads is minimum
		save choice as A_QptrLathe
	move into A_QptrLathe
	
	if Q_PaintingUnloading current = 0 then begin
 		order 1 load from OL_PaintingUnloading to continue
 	end 
 
	set AI_LatheIndex = A_QptrLathe index
	move into Q_Lathe(AI_LatheIndex)
	
	/* processing time */
	use R_Lathe(AI_LatheIndex) for triangular 10, 12, 17 min
	
	move into Q_Final
	
	/* the product is finished */
	send to die
end 

begin P_DownTimePainting arriving procedure
	while 1=1 do begin
		wait for normal 10, 0.5 hr /* MTTF */
		take down R_Painting
		wait for normal 20, 3.9 min /* MTTR */ 
		bring up R_Painting
	end
end

begin P_DownTimeCutters arriving procedure
	set AI_index = nextof(1,2)
	while 1=1 do begin
		wait for exponential 6 hr /* MTTF */
		take down R_Cutter(AI_index)
		wait for triangular 15, 25, 40 min /* MTTR */ 
		bring up R_Cutter(AI_index)
	end
end

begin P_DownTimeLathes arriving procedure
	set AI_index = nextof(1,2,3)
	while 1=1 do begin
		wait for normal 3.5, 0.2 hr /* MTTF */
		take down R_Lathe(AI_index)
		wait for normal 10, 1.9 min /* MTTR */ 
		bring up R_Lathe(AI_index)
	end
end

