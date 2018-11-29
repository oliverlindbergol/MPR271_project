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
PROC name P_DownTimeCutters 0 traf Infinite
PROC name P_DownTimePolisher 0 traf Infinite
PROC name P_DownTimePolishers 0 traf Infinite
PROC name P_DownTimeTurner1 0 traf Infinite
PROC name P_DownTimeTurner2 0 traf Infinite
PROC name P_DownTimeGrinder1 0 traf Infinite
PROC name P_DownTimeGrinder2 0 traf Infinite
PROC name P_RawMaterialArrival 0 traf Infinite
PROC name P_Loading 0 traf Infinite
PROC name P_WareHouse 0 traf Infinite
PROC name P_Cutter 0 traf Infinite
PROC name P_Turner1 0 traf Infinite
PROC name P_Turner2 0 traf Infinite
PROC name P_Grinder1 0 traf Infinite
PROC name P_Grinder2 0 traf Infinite
PROC name P_final 0 traf Infinite
PROC name P_Final 0 traf Infinite
PROC name P_Polisher 0 traf Infinite
PROC name P_SurfaceTreatment 0 traf Infinite
PROC name P_Cooling 0 traf Infinite
PROC name P_DownTimeMeasure 0 traf Infinite
PROC name P_Measure 0 traf Infinite
PROC name P_SurfaceInspection 0 traf Infinite
PROC name P_Packaging 0 traf Infinite
LDTYPE name L_Init 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
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
LDTYPE name L_DownPolisher 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_DownPolishers 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_DownTurner1 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_DownGrinder1 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_Pipe 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_Fixture 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_Product40 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_Product46 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_Product49 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_DownTurner2 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_DownGrinder2 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
LDTYPE name L_DownTimeMeasure 0
picpos endx 1
 template Feet
700 17
2 2 0 1 1 none
1
310 0
1 1 1 1 1 0 0
end
RSRC name R_CutOperator 0 cap 1 prtime con 5 Seconds stream stream_R_CutOperator_1
 dis 0 picpos begx -93 begy 46 endx -92 endy 46

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Cutter 2 cap 1 prtime con 5 Seconds stream stream_R_Cutter_1
 dis 1 picpos begx -93 begy 58 endx -92 endy 58
 dis 2 picpos begx -93 begy 38 endx -92 endy 38

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_TnSoperator 0 cap 1 prtime con 5 Seconds stream stream_R_TnSoperator_1
 dis 0 picpos begx 46 begy -5 endx 47 endy -5

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Turner1 0 cap 1 prtime con 5 Seconds stream stream_R_Turner1_1
 dis 0 picpos begx -53 begy 53 endx -52 endy 53

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Turner2 0 cap 1 prtime con 5 Seconds stream stream_R_Turner2_1
 dis 0 picpos begx -28 begy 53 endx -27 endy 53

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Grinder1 0 cap 1 prtime con 5 Seconds stream stream_R_Grinder1_1
 dis 0 picpos begx 12 begy 53 endx 13 endy 53

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Maintenance 0 cap 1 prtime con 5 Seconds stream stream_R_Maintenance_1
 dis 0 picpos begx 46 begy -13 endx 47 endy -13

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Grinder2 0 cap 1 prtime con 5 Seconds stream stream_R_Grinder2_1
 dis 0 picpos begx 32 begy 53 endx 33 endy 53

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Polisher 3 cap 1 prtime con 5 Seconds stream stream_R_Polisher_1
 dis 1 picpos begx -48 begy 23 endx -47 endy 23
 dis 2 picpos begx -49 begy 10 endx -48 endy 10
 dis 3 picpos begx -49 begy -4 endx -48 endy -4

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Surface 0 cap 1 prtime con 5 Seconds stream stream_R_Surface_1
 dis 0 picpos begx -66 begy -30 endx -65 endy -30

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Measure 0 cap 1 prtime con 5 Seconds stream stream_R_Measure_1
 dis 0 picpos begx 2 begy -31 endx 3 endy -31

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
RSRC name R_Inspector 0 cap 1 prtime con 5 Seconds stream stream_R_Inspector_1
 dis 0 picpos begx 18 begy -31 endx 19 endy -31

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 0
4 4 4 4 4 0 0
end
		
QUEUE name Q_WareHouse 0 cap 50

	dis 0 Stacking PLUSZ
		picpos begx -118 begy 48 endx -117 endy 48

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Cutter 2 cap 1

	dis 1 Stacking PLUSZ
		picpos begx -93 begy 53 endx -92 endy 53

	dis 2 Stacking PLUSZ
		picpos begx -93 begy 33 endx -92 endy 33

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Buffer1 0 cap 4

	dis 0 Stacking PLUSZ
		picpos begx -73 begy 52 endx -72 endy 52

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Turner1 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -53 begy 48 endx -52 endy 48

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Turner2 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -28 begy 48 endx -27 endy 48

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Buffer2 0 cap 2

	dis 0 Stacking PLUSZ
		picpos begx -8 begy 52 endx -7 endy 52

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Grinder1 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx 12 begy 48 endx 13 endy 48

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Grinder2 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx 32 begy 48 endx 33 endy 48

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Fixture 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -2 begy 25 endx -1 endy 25

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_LoadingProduct 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx 4 begy 9 endx 5 endy 9

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_LoadingFixture 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -8 begy 9 endx -7 endy 9

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_FixtureInPolisher 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -36 begy 8 endx -35 endy 8

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_FixtureUnloading 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -93 begy 15 endx -92 endy 15

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Conveyor 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -22 begy 25 endx -21 endy 25

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Buffer40 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx 18 begy 25 endx 19 endy 25

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Buffer46 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx 18 begy 15 endx 19 endy 15

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Polisher 3 cap 1

	dis 1 Stacking PLUSZ
		picpos begx -50 begy 18 endx -49 endy 18

	dis 2 Stacking PLUSZ
		picpos begx -49 begy 4 endx -48 endy 4

	dis 3 Stacking PLUSZ
		picpos begx -49 begy -9 endx -48 endy -9

	UserDef	template Feet
700 17
-1 -1 0 1 1 none
1
310 17
-1 -1 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Buffer49 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx 18 begy 3 endx 19 endy 3

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Unloading 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -78 begy 15 endx -77 endy 15

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Buffer3 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -93 begy -36 endx -92 endy -36

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_UnloadingArea 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -40 begy -36 endx -39 endy -36

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_DummyUnloadingArea 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -40 begy -45 endx -39 endy -45

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_DummySurface 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -66 begy -45 endx -65 endy -45

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Surface 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -66 begy -36 endx -65 endy -36

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Cooling 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx -15 begy -39 endx -14 endy -39

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Measure 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx 2 begy -39 endx 3 endy -39

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_SurfaceInspection 0 cap 1

	dis 0 Stacking PLUSZ
		picpos begx 18 begy -39 endx 19 endy -39

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

QUEUE name Q_Packaging 0 cap 2147483647

	dis 0 Stacking PLUSZ
		picpos begx 40 begy -38 endx 41 endy -38

	UserDef	template Feet
700 17
2 2 0 1 1 none
1
310 17
2 2 0 1 0 none
4 4 4 4 4 0 0
end

ORDER name OL_WaitForCutter 0
ORDER name OL_CutterWait 0
ORDER name OL_Turner1Wait 0
ORDER name OL_Turner2Wait 0
ORDER name OL_Grinder1Wait 0
ORDER name OL_FixtureAvailable 0
ORDER name OL_FixtureLoad 0
ORDER name OL_FixtureUnload 0
ORDER name OL_ProductLoad 0
ORDER name OL_WaitForBatch 0
ORDER name OL_WaitBatchSurface 0
ORDER name OL_WaitBatchUnloading 0
ORDER name OL_WaitUnloadingArea 0
ORDER name OL_FixtureMayEnterPolisher 0
ORDER name OL_FixtureToConveyor 0
COUNT name C_Product40 0 cap Infinite
COUNT name C_Product46 0 cap Infinite
COUNT name C_Product49 0 cap Infinite
ATT name AI_CutType 0 type Integer
ATT name A_QPtr 0 type QueuePtr
ATT name AI_Index 0 type Integer
ATT name AI_CutsDone 0 type Integer
ATT name AI_ProdType 0 type Integer
ATT name AI_index 0 type Integer
ATT name AI_PolisherIndex 0 type Integer
ATT name A_QptrPolisher 0 type QueuePtr
ATT name AI_InspectionResult 0 type Integer
VAR name VI_CycleTimePolisher 1 3 type Integer
VAR name VI_ArrivingTime 0 type Integer
VAR name VI_PipeLength 0 type Integer
VAR name VI_LoadingTime 0 type Integer
VAR name VI_FixtureTravelTime 0 type Integer
VAR name VI_Numberofcuts 1 3 type Integer
VAR name VI_MAXbefortoolchange 0 type Integer
VAR name VI_PrevTurner 0 type Integer
VAR name VI_NumberofTurns1 0 type Integer
VAR name VI_NumberofTurns2 0 type Integer
VAR name VI_BatchSize 0 type Integer
VAR name VI_NumberCycles 0 type Integer
VAR name VI_PrevMeasure 0 type Integer
VAR name VI_PrevTurner1 0 type Integer
VAR name VI_PrevTurner2 0 type Integer
RNSTREAM stream0 0 type CMRG flags 1
	cmrgseed 1 12345 12345 12345 12345 12345 12345
RNSTREAM stream_R_CutOperator_1 0 type CMRG flags 1
	title "Generated automatically for R_CutOperator"
	cmrgseed 1 3692455944 1366884236 2968912127 335948734 4161675175 475798818
RNSTREAM stream_R_Cutter_1 2 type CMRG flags 1
	title "Generated automatically for R_Cutter"
	cmrgseed 1 1015873554 1310354410 2249465273 994084013 2912484720 3876682925
	cmrgseed 2 2338701263 1119171942 2570676563 317077452 3194180850 618832124
RNSTREAM stream_R_TnSoperator_1 0 type CMRG flags 1
	title "Generated automatically for R_TnSoperator"
	cmrgseed 1 1597262096 3906379055 3312112953 1016013135 4099474108 275305423
RNSTREAM stream_R_Turner1_1 0 type CMRG flags 1
	title "Generated automatically for R_Turner1"
	cmrgseed 1 97147054 3131372450 829345164 3691032523 3006063034 4259826321
RNSTREAM stream_R_Turner2_1 0 type CMRG flags 1
	title "Generated automatically for R_Turner2"
	cmrgseed 1 3281794178 2616230133 1457051261 2762791137 2480527362 2282316169
RNSTREAM stream_R_Grinder1_1 0 type CMRG flags 1
	title "Generated automatically for R_Grinder1"
	cmrgseed 1 3777646647 1837464056 4204654757 664239048 4190510072 2959195122
RNSTREAM stream_R_Maintenance_1 0 type CMRG flags 1
	title "Generated automatically for R_Maintenance"
	cmrgseed 1 4215590817 3862461878 1087200967 1544910132 936383720 1611370123
RNSTREAM stream_R_Grinder2_1 0 type CMRG flags 1
	title "Generated automatically for R_Grinder2"
	cmrgseed 1 1683636369 362165168 814316280 869382050 980203903 2062101717
RNSTREAM stream_R_Polisher_1 3 type CMRG flags 1
	title "Generated automatically for R_Polisher"
	cmrgseed 1 272317999 166758548 310112982 201045826 1680231254 118290799
	cmrgseed 2 2245755202 1652682525 2865544364 721509566 209733568 592362218
	cmrgseed 3 3003961408 3529909391 14538032 3603919910 566682685 1235016484
RNSTREAM stream_R_Surface_1 0 type CMRG flags 1
	title "Generated automatically for R_Surface"
	cmrgseed 1 596094074 2279636413 3050913596 1739649456 2368706608 3058697049
RNSTREAM stream_R_Measure_1 0 type CMRG flags 1
	title "Generated automatically for R_Measure"
	cmrgseed 1 3224044943 1227141655 2220611050 1504589054 2829780440 108189859
RNSTREAM stream_R_Inspector_1 0 type CMRG flags 1
	title "Generated automatically for R_Inspector"
	cmrgseed 1 927434978 1593504038 2143021818 1749489845 1330187821 2371554242
RNSTATE 3446225690 835741554 2195834023 1297741021 3357053382 383824268
SFileBegin	name upperlanelogic.m
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












#@!
SFileBegin	name polisher.m
begin P_Loading arriving procedure
    while 1=1 begin
        move into Q_Fixture
        if Q_LoadingProduct current >0 then
        	order 1 load from OL_FixtureAvailable to continue
        wait to be ordered on OL_FixtureLoad
        move into Q_LoadingFixture
        wait to be ordered on OL_FixtureMayEnterPolisher
        move into Q_FixtureInPolisher
        wait to be ordered on OL_FixtureUnload
       	move into Q_FixtureUnloading
        wait to be ordered on OL_FixtureToConveyor
        move into Q_Conveyor
        wait for VI_FixtureTravelTime min
    end
end

begin P_Polisher arriving procedure
    if this load type = L_Product40 then 
    	begin
        	move into Q_Buffer40
        	set AI_PolisherIndex = 1
        end
    else if this load type = L_Product46 then
        begin
	        move into Q_Buffer46 
	        //Choose Polisher 2 if available or if all machines are occuppied.
	        //Otherwise choose one of 1 or 3 with shortest queue (if both available it picks randomly).
	        if Q_Polisher(2) remaining space > 0 then
	            set AI_PolisherIndex = 2
	        else if Q_Polisher(1) remaining space = 0 and Q_Polisher(2) remaining space = 0 and Q_Polisher(3) remaining space = 0 then
	            set AI_PolisherIndex = 2
	        else
	        	begin
		            choose a queue from among Q_Polisher(1), Q_Polisher(3)
		                whose current loads is minimum
		                save choice as A_QptrPolisher
		            set AI_PolisherIndex = A_QptrPolisher index
	            end
        end
    else if this load type = L_Product49 then 
    	begin
	        move into Q_Buffer49
	        set AI_PolisherIndex = 3
        end
    

    if Q_LoadingProduct remaining space < 1 then
    	wait to be ordered on OL_ProductLoad
    
    move into Q_LoadingProduct
    
    if Q_Fixture current = 0 then
    	wait to be ordered on OL_FixtureAvailable
    	
    order 1 load from OL_FixtureLoad to continue
    wait for VI_LoadingTime sec
    
    move into Q_Polisher(AI_PolisherIndex)
    order 1 load from OL_FixtureMayEnterPolisher to continue
    
    order 1 load from OL_ProductLoad to continue
    
    use R_Polisher(AI_PolisherIndex) for VI_CycleTimePolisher(AI_PolisherIndex) sec
	move into Q_Unloading
	order 1 load from OL_FixtureUnload to continue
    wait for VI_LoadingTime sec
    order 1 load from OL_FixtureToConveyor to continue

    move into Q_Buffer3    
    send to P_SurfaceTreatment
end


#@!
SFileBegin	name init.m
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
    set Q_LoadingFixture capacity = 1
    set Q_LoadingProduct capacity = 1
	set Q_FixtureInPolisher capacity = 3
    set Q_Unloading capacity = 1
    set Q_FixtureUnloading capacity = 1
    set Q_DummySurface capacity = VI_BatchSize-1
    set Q_UnloadingArea capacity = 1
    set Q_DummyUnloadingArea capacity = VI_BatchSize-1
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


#@!
SFileBegin	name downtimes.m
begin P_DownTimePolishers arriving procedure
    set AI_index = nextof(1,2,3)
    while 1=1 do begin
        wait for exponential 90 min /* MTTF */
        take down R_Polisher(AI_index)
        use R_Maintenance for gamma 2,6 min /* MTTR */ 
        //wait for gamma 2,6 min
        bring up R_Polisher(AI_index)
    end
end

begin P_DownTimeCutters arriving procedure
	set AI_index = nextof(1,2)
	while 1=1 do begin
		wait for exponential 140 min /* MTTF */
		take down R_Cutter(AI_index)
		use R_Maintenance for triangular 12, 30, 35 min /* MTTR */ 
		//wait for triangular 12, 30, 35 min
		bring up R_Cutter(AI_index)
	end
end	

begin P_DownTimeTurner1 arriving procedure

	while 1=1 do begin
		wait for exponential 125 min /* MTTF */
		take down R_Turner1
		use R_Maintenance for gamma 2,11 min /* MTTR */ 
		//wait for gamma 2,11 min
		bring up R_Turner1
	end
end	

begin P_DownTimeTurner2 arriving procedure

	while 1=1 do begin
		wait for exponential 125 min /* MTTF */
		//take down R_Turner2
		use R_Maintenance for gamma 2,11 min /* MTTR */
		wait for gamma 2,11 min 
		bring up R_Turner2
	end
end

begin P_DownTimeGrinder1 arriving procedure

	while 1=1 do begin
		wait for exponential 120 min /* MTTF */
		take down R_Grinder1
		use R_Maintenance for triangular 12, 18, 35 min /* MTTR */ 
		//wait for triangular 12, 18, 35 min
		bring up R_Grinder1
	end
end

begin P_DownTimeGrinder2 arriving procedure

	while 1=1 do begin
		wait for exponential 120 min /* MTTF */
		take down R_Grinder2
		use R_Maintenance for triangular 12, 18, 35 min/* MTTR */ 
		//wait for triangular 12, 18, 35 min
		bring up R_Grinder2
	end
end

begin P_DownTimeMeasure arriving procedure
    while 1=1 do begin
        wait for exponential 20 min /* MTTF */
        take down R_Measure
        use R_Inspector for 1 sec /* MTTR */ 
        wait for 2.5 min
        bring up R_Measure
    end
end 

#@!
SFileBegin	name lowerlane.m
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

#@!
