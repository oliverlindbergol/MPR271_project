begin P_DownTimePolishers arriving procedure
    set AI_index = nextof(1,2,3)
    while 1=1 do begin
        wait for exponential 90 min /* MTTF */
        take down R_Polisher(AI_index)
        use R_MaintenanceGuy for gamma 12, 2 min /* MTTR */ 
        bring up R_Polisher(AI_index)
    end
end

begin P_DownTimeCutters arriving procedure
	set AI_index = nextof(1,2)
	while 1=1 do begin
		wait for exponential 140 min /* MTTF */
		take down R_Cutter(AI_index)
		use R_Maintenance for triangular 12, 30, 35 min /* MTTR */ 
		bring up R_Cutter(AI_index)
	end
end	

begin P_DownTimeTurner1 arriving procedure

	while 1=1 do begin
		wait for exponential 125 min /* MTTF */
		take down R_Turner1
		use R_Maintenance for gamma 2,11 min /* MTTR */ 
		bring up R_Turner1
	end
end	

begin P_DownTimeTurner2 arriving procedure

	while 1=1 do begin
		wait for exponential 125 min /* MTTF */
		take down R_Turner2
		use R_Maintenance for gamma 2,11 min /* MTTR */ 
		bring up R_Turner2
	end
end

begin P_DownTimeGrinder1 arriving procedure

	while 1=1 do begin
		wait for exponential 120 min /* MTTF */
		take down R_Grinder1
		use R_Maintenance for triangular 12, 18, 35 min /* MTTR */ 
		bring up R_Grinder1
	end
end

begin P_DownTimeGrinder2 arriving procedure

	while 1=1 do begin
		wait for exponential 120 min /* MTTF */
		take down R_Grinder2
		use R_Maintenance for triangular 12, 18, 35 min/* MTTR */ 
		bring up R_Grinder2
	end
end

