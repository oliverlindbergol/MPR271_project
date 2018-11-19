VERSION 12.6.1.19
SYSTYPE Process
UNITS Feet Seconds
SYSDEF UtilByAvail off RefCheck on debugger on warningMessages on report standard
FLAGS
	System Inherit
	Text Inherit
	Resources Inherit
	Resource Names Inherit
	Queues Inherit
	Queue Names Inherit
	Queue Amounts Inherit
	Blocks Inherit
	Block Names Inherit
	Labels Inherit
PROCDEF
PROC name P_Init 0 traf Infinite
PROC name P_Creation 0 traf Infinite
PROC name P_Cutting 0 traf Infinite
PROC name P_Painting 0 traf Infinite
PROC name P_Lathes 0 traf Infinite
PROC name P_DownTimePainting 0 traf Infinite
PROC name P_DownTimeCutters 0 traf Infinite
PROC name P_DownTimeLathes 0 traf Infinite
PROC name P_Unloading 0 traf Infinite
LDTYPE name L_Init 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_TubeA 0 dis
picpos begx -70.65 endx -69.65 upy 0.53582679965216 upz 0.844327922536335
 color 2 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_TubeB 0 dis
picpos begx -70.65 begy -5.91029527559055 begz 3.75078781167979 endx -69.65 endy -5.91029527559055 endz 3.75078781167979 upy 0.53582679965216 upz 0.844327922536335
 color 4 template Feet
700 17
4 4 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_Product 0 dis
picpos begx -71 begy -12 endx -70 endy -12 upy 0.53582679965216 upz 0.844327922536335
 color 1 template Feet
700 17
1 1 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_DownPainting 0 dis
picpos begx -23 begy 23 endx -22 endy 23
 color 0 template Feet
700 17
0 0 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_DownCutters 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_DownLathes 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
RSRC name R_Cutter 2 cap 1 prtime con 5 Seconds stream stream_R_Cutter_1
 dis 1 picpos begx -43.65 begy 14.3535744750656 begz -9.10905593832021 endx -42.65 endy 14.3535744750656 endz -9.10905593832021
 dis 2 picpos begx -43.65 begy -12.6649187992126 begz 8.03740239501312 endx -42.65 endy -12.6649187992126 endz 8.03740239501312

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Painting 0 cap 1 prtime con 5 Seconds stream stream_R_Painting_1
 dis 0 picpos begx -16.65 begy 2.53298371883202 begz -1.60748041748688 endx -15.65 endy 2.53298371883202 endz -1.60748041748688

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Lathe 3 cap 1 prtime con 5 Seconds stream stream_R_Lathe_1
 dis 1 picpos begx 15.35 begy 21.1082004593176 begz -13.3956709317585 endx 16.35 endy 21.1082004593176 endz -13.3956709317585
 dis 2 picpos begx 15.35 begy 0.844327940452756 begz -0.535826822916667 endx 16.35 endy 0.844327940452756 endz -0.535826822916667
 dis 3 picpos begx 15.35 begy -17.7308858267717 begz 11.2523630249344 endx 16.35 endy -17.7308858267717 endz 11.2523630249344

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
QUEUE name Q_BufferCutter 2 cap 1

	dis 1 Stacking OTT_LDDISP
		picpos begx -55.65 begy 13.5092470472441 begz -8.57322916666667 endx -54.65 endy 13.5092470472441 endz -8.57322916666667 upy 0.53582679965216 upz 0.844327922536335

	dis 2 Stacking OTT_LDDISP
		picpos begx -54.65 begy -13.5092470472441 begz 8.57322916666667 endx -53.65 endy -13.5092470472441 endz 8.57322916666667 upy 0.53582679965216 upz 0.844327922536335

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Cutter 2 cap 1

	dis 1 Stacking OTT_LDDISP
		picpos begx -43.65 begy 6.75462352362205 begz -4.28661458333333 endx -42.65 endy 6.75462352362205 endz -4.28661458333333 upy 0.53582679965216 upz 0.844327922536335

	dis 2 Stacking OTT_LDDISP
		picpos begx -43.65 begy -21.1082004593176 begz 13.3956709317585 endx -42.65 endy -21.1082004593176 endz 13.3956709317585 upy 0.53582679965216 upz 0.844327922536335

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_BufferPainting 0 cap 1

	dis 0 Stacking OTT_LDDISP
		picpos begx -27.65 begy 1.68865588090551 begz -1.07165364583333 endx -26.65 endy 1.68865588090551 endz -1.07165364583333 upy 0.53582679965216 upz 0.844327922536335

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Painting 0 cap 1

	dis 0 Stacking OTT_LDDISP
		picpos begx -16.65 begy -5.91029527559055 begz 3.75078781167979 endx -15.65 endy -5.91029527559055 endz 3.75078781167979 upy 0.53582679965216 upz 0.844327922536335

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_PaintingUnloading 0 cap 1

	dis 0 Stacking OTT_LDDISP
		picpos begx -8.65 begy 1.68865588090551 begz -1.07165364583333 endx -7.65 endy 1.68865588090551 endz -1.07165364583333 upy 0.53582679965216 upz 0.844327922536335

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_BufferLathe 3 cap 1

	dis 1 Stacking OTT_LDDISP
		picpos begx 8.35 begy 21.1082004593176 begz -13.3956709317585 endx 9.35 endy 21.1082004593176 endz -13.3956709317585 upy 0.53582679965216 upz 0.844327922536335

	dis 2 Stacking OTT_LDDISP
		picpos begx 8.35 begy 1.68865588090551 begz -1.07165364583333 endx 9.35 endy 1.68865588090551 endz -1.07165364583333 upy 0.53582679965216 upz 0.844327922536335

	dis 3 Stacking OTT_LDDISP
		picpos begx 8.35 begy -16.8865583989501 begz 10.7165362532808 endx 9.35 endy -16.8865583989501 endz 10.7165362532808 upy 0.53582679965216 upz 0.844327922536335

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Lathe 3 cap 1

	dis 1 Stacking OTT_LDDISP
		picpos begx 15.35 begy 13.5092470472441 begz -8.57322916666667 endx 16.35 endy 13.5092470472441 endz -8.57322916666667 upy 0.53582679965216 upz 0.844327922536335

	dis 2 Stacking OTT_LDDISP
		picpos begx 15.35 begy -6.75462352362205 begz 4.28661458333333 endx 16.35 endy -6.75462352362205 endz 4.28661458333333 upy 0.53582679965216 upz 0.844327922536335

	dis 3 Stacking OTT_LDDISP
		picpos begx 15.35 begy -26.1741650262467 begz 16.6106315616798 endx 16.35 endy -26.1741650262467 endz 16.6106315616798 upy 0.53582679965216 upz 0.844327922536335

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Final 0 cap 1

	dis 0 Stacking OTT_LDDISP
		picpos begx 31.35 begy 1.68865588090551 begz -1.07165364583333 endx 32.35 endy 1.68865588090551 endz -1.07165364583333 upy 0.53582679965216 upz 0.844327922536335

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_DummyPainting 0 cap 2

	dis 0 Stacking OTT_LDDISP
		picpos begx -16 begy -12 endx -15 endy -12

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

ORDER name OL_PaintBufferFull 0
ORDER name OL_LatheBufferFull 0
ORDER name OL_PaintBatch 0
ORDER name OL_WaitBatchPainting 0
ORDER name OL_PaintingUnloading 0
ATT name AI_Type 0 type Integer
ATT name A_QptrCutter 0 type QueuePtr
ATT name AI_CutterIndex 0 type Integer
ATT name AI_Cuts 0 type Integer
ATT name A_QptrLathe 0 type QueuePtr
ATT name AI_LatheIndex 0 type Integer
ATT name AI_index 0 type Integer
VAR name VI_CycleTimeCutter 2 2 3 type Integer
VAR name VI_SetupCutter 2 2 2 type Integer
VAR name VI_ArrivingTime 1 2 type Integer
VAR name VI_PrevType 1 2 type Integer
VAR name VI_BatchSize 0 type Integer 3
RNSTREAM stream0 0 type CMRG flags 1
	cmrgseed 1 12345 12345 12345 12345 12345 12345
RNSTREAM stream_R_Cutter_1 2 type CMRG flags 1
	title "Generated automatically for R_Cutter"
	cmrgseed 1 3692455944 1366884236 2968912127 335948734 4161675175 475798818
	cmrgseed 2 1015873554 1310354410 2249465273 994084013 2912484720 3876682925
RNSTREAM stream_R_Painting_1 0 type CMRG flags 1
	title "Generated automatically for R_Painting"
	cmrgseed 1 2338701263 1119171942 2570676563 317077452 3194180850 618832124
RNSTREAM stream_R_Lathe_1 3 type CMRG flags 1
	title "Generated automatically for R_Lathe"
	cmrgseed 1 1597262096 3906379055 3312112953 1016013135 4099474108 275305423
	cmrgseed 2 97147054 3131372450 829345164 3691032523 3006063034 4259826321
	cmrgseed 3 796079799 2105258207 955365076 2923159030 4116632677 3067683584
RNSTATE 3281794178 2616230133 1457051261 2762791137 2480527362 2282316169
SFileBegin	name logic.m
begin model initialization function
	//create a load who will start the code
	create 1 load of load type L_Init to P_Init
	create 1 load of load type L_DownPainting to P_DownTimePainting
	create 2 loads of load type L_DownCutters to P_DownTimeCutters
	create 3 loads of load type L_DownLathes to P_DownTimeLathes
	return 0
end

//Test change

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

#@!
