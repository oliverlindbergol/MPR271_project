//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





/*==========================Processes==================================*/
begin P_Cutter arriving procedure
 
	set AI_CutType = oneof(0.35:3,0.45:2,0.20:1)
	// pick Cutter with most space
	choose a queue from among Q_Cutter(1),Q_Cutter(2) whose current loads is minimum
		save choice as A_QPtr
	set AI_Index = A_QPtr index

	// Pipe needs Cutoperator for every pipe that is loaded
	move into Q_Cutter(AI_Index)
	get R_CutOperator
	use R_Cutter(AI_Index) for normal 55,0.1 sec
	free R_CutOperator
	
	// As long as number of cuts is less then reqired Keep on cutting
	while AI_CutsDone < VI_Numberofcuts(AI_CutType)-1 do begin
		use R_Cutter(AI_Index) for 160 sec
		
		
		
		
		if Q_Buffer1 remaining space < 1 then begin
			
				wait to be ordered on OL_CutterWait
		end
		
		if AI_CutType == 1 then 
			create 1 load of type L_Product40 to P_Turner1
		if AI_CutType == 2 then
			create 1 load of type L_Product46 to P_Turner1
		 
		if AI_CutType == 3 then
			create 1 load of type L_Product49 to P_Turner1
		
		inc AI_CutsDone by 1 
		 
	end
	
	order 1 load from OL_WaitForCutter to continue
	send to die
	
end
	
////////////////////////////////////////////////////////////
begin P_Turner1 arriving procedure
	move into Q_Buffer1
	move into Q_Turner1
	order 1 load from OL_CutterWait
	if this load type = L_Product40 then	
		set AI_ProdType = 1 
	if this load type = L_Product46 then	
		set AI_ProdType = 2
	if this load type = L_Product49 then	
		set AI_ProdType = 3

	if AI_ProdType != VI_PrevTurner1 then begin
		get R_TnSoperator
		use R_Turner1 for triangular 10, 12, 20 sec
		free R_TnSoperator
		set VI_PrevTurner1 = AI_ProdType
	end
	
	if VI_NumberofTurns1 >= VI_MAXbefortoolchange then begin
		get R_TnSoperator
		use R_Turner1 for normal 310,30 sec
		free R_TnSoperator
		set VI_NumberofTurns1 = 0
	end
	
	use R_Turner1 for 290 sec
	inc VI_NumberofTurns1 by 1 
	//if Q_Turner2 remaining space = 0 then 
	//	wait to be ordered on OL_Turner1Wait
	
	send to P_Turner2
end
//////////////////////////////////////////////////////////////////
begin P_Turner2 arriving procedure

	move into Q_Turner2	

	if this load type == L_Product40 then	
		set AI_ProdType = 40 
	if this load type == L_Product46 then	
		set AI_ProdType = 46
	if this load type == L_Product49 then	
		set AI_ProdType = 49

	if AI_ProdType != VI_PrevTurner2 then  begin
		get R_TnSoperator
		use R_Turner2 for triangular 10, 12, 20 sec
		free R_TnSoperator
		set VI_PrevTurner2 = AI_ProdType
	end
	
	if VI_NumberofTurns2 >= VI_MAXbefortoolchange then begin
		get R_TnSoperator
		use R_Turner2 for normal 310,30 sec
		free R_TnSoperator
		set VI_NumberofTurns2 = 0
	end
	
	use R_Turner2 for 290 sec
	inc VI_NumberofTurns2 by 1 
	//if Q_Buffer2 remaining space = 0 then 
	//	wait to be ordered on OL_Turner2Wait
		
	//order 1 load from OL_Turner1Wait
	send to P_Grinder1
end
//////////////////////////////////////////
begin P_Grinder1 arriving procedure

	move into Q_Buffer2
	move into Q_Grinder1

	if this load type = L_Product40 then	
		use R_Grinder1 for 270 sec
	if this load type = L_Product46 then	
		use R_Grinder1 for 290 sec
	if this load type = L_Product49 then	
		use R_Grinder1 for 330 sec
	
	
	//if Q_Grinder2 remaining space = 0 then 
	//	wait to be ordered on OL_Grinder1Wait
	
	//order 1 load from OL_Turner2Wait
	send to P_Grinder2
end

begin P_Grinder2 arriving procedure

	
	move into Q_Grinder2

	if this load type = L_Product40 then	
		use R_Grinder2 for 270 sec
	if this load type = L_Product46 then	
		use R_Grinder2 for 290 sec
	if this load type = L_Product49 then	
		use R_Grinder2 for 330 sec
	
	
	
	//send 1 load to P_Polisher
	//order 1 load from OL_Grinder1Wait
	send to P_Polisher
end



/*==========================DownTimers==================================*/












