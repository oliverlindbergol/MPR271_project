// tom_upperlane~init1.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.19
// Model name:	tom_upperlane
// Model path:	D:\Oliver\MPSYS\SOPS\Project\tom_upperlane.dir\
// Generated:	Sat Nov 24 12:20:16 2018
// Applied/AutoMod Licensee Confidential
// NO DISTRIBUTION OR REPRODUCTION RIGHTS GRANTED!
// Copyright (c) 1988-2016 Applied Materials All rights reserved.
//
// All Rights Reserved.  Reproduction or transmission in whole or
// in part, in any form or by any means, electronic, mechanical or
// otherwise, is prohibited without the prior written consent of
// copyright owner.
//
// Licensed Material - Property of Applied Materials, Inc.
//
// Applied Materials, Inc.
// 3050 Bowers Drive
// P.O. Box 58039
// Santa Clara, CA 95054-3299
// U.S.A.
//


#include "decls.h"

void
initglobs0()
{
	am_model.$sys = model;
	am_model.am_Q_DummyUnloadingArea = symGetSystemDataByName(am_model.$sys, "Q_DummyUnloadingArea");
	am_model.am_Q_Packaging = symGetSystemDataByName(am_model.$sys, "Q_Packaging");
	am_model.am_P_Packaging = symGetSystemDataByName(am_model.$sys, "P_Packaging");
	am_model.am_stream_R_Grinder1_1 = symGetSystemDataByName(am_model.$sys, "stream_R_Grinder1_1");
	am_model.am_Q_Buffer2 = symGetSystemDataByName(am_model.$sys, "Q_Buffer2");
	am_model.am_die = symGetSystemDataByName(am_model.$sys, "die");
	am_model.am_L_DownTurner2 = symGetSystemDataByName(am_model.$sys, "L_DownTurner2");
	am_model.am_AI_InspectionResult$att = symGetSystemDataByName(am_model.$sys, "AI_InspectionResult");
	am_model.am_AI_CutType$att = symGetSystemDataByName(am_model.$sys, "AI_CutType");
	am_model.am_Q_LoadingProduct = symGetSystemDataByName(am_model.$sys, "Q_LoadingProduct");
	am_model.am_AI_ProdType$att = symGetSystemDataByName(am_model.$sys, "AI_ProdType");
	am_model.am_Q_LoadingFixture = symGetSystemDataByName(am_model.$sys, "Q_LoadingFixture");
	am_model.am_VI_PrevTurner$var = symGetSystemDataByName(am_model.$sys, "VI_PrevTurner");
	am_model.am_VI_PrevTurner$var->data = (void*)&am_model.am_VI_PrevTurner;
	am_model.am_L_DownGrinder1 = symGetSystemDataByName(am_model.$sys, "L_DownGrinder1");
	am_model.am_Q_Buffer49 = symGetSystemDataByName(am_model.$sys, "Q_Buffer49");
	am_model.am_Q_Buffer3 = symGetSystemDataByName(am_model.$sys, "Q_Buffer3");
	am_model.am_Q_FixtureUnloading = symGetSystemDataByName(am_model.$sys, "Q_FixtureUnloading");
	am_model.am_L_Fixture = symGetSystemDataByName(am_model.$sys, "L_Fixture");
	am_model.am_L_Init = symGetSystemDataByName(am_model.$sys, "L_Init");
	am_model.am_Q_Buffer46 = symGetSystemDataByName(am_model.$sys, "Q_Buffer46");
	am_model.am_L_DownTurner1 = symGetSystemDataByName(am_model.$sys, "L_DownTurner1");
	am_model.am_VI_NumberCycles$var = symGetSystemDataByName(am_model.$sys, "VI_NumberCycles");
	am_model.am_VI_NumberCycles$var->data = (void*)&am_model.am_VI_NumberCycles;
	am_model.am_L_DownGrinder2 = symGetSystemDataByName(am_model.$sys, "L_DownGrinder2");
	am_model.am_AI_CutsDone$att = symGetSystemDataByName(am_model.$sys, "AI_CutsDone");
	am_model.am_Q_Fixture = symGetSystemDataByName(am_model.$sys, "Q_Fixture");
	am_model.am_P_Init = symGetSystemDataByName(am_model.$sys, "P_Init");
	am_model.am_L_DownPolisher = symGetSystemDataByName(am_model.$sys, "L_DownPolisher");
	am_model.am_L_Pipe = symGetSystemDataByName(am_model.$sys, "L_Pipe");
	am_model.am_P_SurfaceTreatment = symGetSystemDataByName(am_model.$sys, "P_SurfaceTreatment");
	am_model.am_P_DownTimeTurner1 = symGetSystemDataByName(am_model.$sys, "P_DownTimeTurner1");
	am_model.am_stream_R_Turner1_1 = symGetSystemDataByName(am_model.$sys, "stream_R_Turner1_1");
	am_model.am_OPCTimestamp$var = symGetSystemDataByName(am_model.$sys, "OPCTimestamp");
	am_model.am_OPCTimestamp$var->data = (void*)&am_model.am_OPCTimestamp;
	am_model.am_OL_WaitForBatch = symGetSystemDataByName(am_model.$sys, "OL_WaitForBatch");
	am_model.am_P_RawMaterialArrival = symGetSystemDataByName(am_model.$sys, "P_RawMaterialArrival");
	am_model.am_Q_Surface = symGetSystemDataByName(am_model.$sys, "Q_Surface");
	am_model.am_R_Surface = symGetSystemDataByName(am_model.$sys, "R_Surface");
	am_model.am_L_DownTimeMeasure = symGetSystemDataByName(am_model.$sys, "L_DownTimeMeasure");
	am_model.am_R_Turner2 = symGetSystemDataByName(am_model.$sys, "R_Turner2");
	am_model.am_P_SurfaceInspection = symGetSystemDataByName(am_model.$sys, "P_SurfaceInspection");
	am_model.am_Q_Turner2 = symGetSystemDataByName(am_model.$sys, "Q_Turner2");
	am_model.am_A_QPtr$att = symGetSystemDataByName(am_model.$sys, "A_QPtr");
	am_model.am_P_Turner2 = symGetSystemDataByName(am_model.$sys, "P_Turner2");
	am_model.am_VI_PrevMeasure$var = symGetSystemDataByName(am_model.$sys, "VI_PrevMeasure");
	am_model.am_VI_PrevMeasure$var->data = (void*)&am_model.am_VI_PrevMeasure;
	am_model.am_Q_SurfaceInspection = symGetSystemDataByName(am_model.$sys, "Q_SurfaceInspection");
	am_model.am_R_CutOperator = symGetSystemDataByName(am_model.$sys, "R_CutOperator");
	am_model.am_stream_R_Measure_1 = symGetSystemDataByName(am_model.$sys, "stream_R_Measure_1");
	am_model.am_P_DownTimeTurner2 = symGetSystemDataByName(am_model.$sys, "P_DownTimeTurner2");
	am_model.am_Q_Unloading = symGetSystemDataByName(am_model.$sys, "Q_Unloading");
	am_model.am_P_DownTimeMeasure = symGetSystemDataByName(am_model.$sys, "P_DownTimeMeasure");
	am_model.am_P_DownTimeGrinder2 = symGetSystemDataByName(am_model.$sys, "P_DownTimeGrinder2");
	am_model.am_stream_R_Turner2_1 = symGetSystemDataByName(am_model.$sys, "stream_R_Turner2_1");
	am_model.am_P_Loading = symGetSystemDataByName(am_model.$sys, "P_Loading");
	am_model.am_stream_R_Polisher_1 = symGetSystemDataByName(am_model.$sys, "stream_R_Polisher_1");
	am_model.am_OL_FixtureUnload = symGetSystemDataByName(am_model.$sys, "OL_FixtureUnload");
	am_model.am_OL_ProductLoad = symGetSystemDataByName(am_model.$sys, "OL_ProductLoad");
	am_model.am_Q_Cooling = symGetSystemDataByName(am_model.$sys, "Q_Cooling");
	am_model.am_L_Product46 = symGetSystemDataByName(am_model.$sys, "L_Product46");
	am_model.am_VI_Numberofcuts$var = symGetSystemDataByName(am_model.$sys, "VI_Numberofcuts");
	am_model.am_VI_Numberofcuts = (int32*)xcalloc(4, sizeof(*am_model.am_VI_Numberofcuts));
	am_model.am_VI_Numberofcuts$var->data = (void*)am_model.am_VI_Numberofcuts;
	am_model.am_AI_Index$att = symGetSystemDataByName(am_model.$sys, "AI_Index");
	am_model.am_P_Cooling = symGetSystemDataByName(am_model.$sys, "P_Cooling");
	am_model.am_VI_FixtureTravelTime$var = symGetSystemDataByName(am_model.$sys, "VI_FixtureTravelTime");
	am_model.am_VI_FixtureTravelTime$var->data = (void*)&am_model.am_VI_FixtureTravelTime;
	am_model.am_C_Product46 = symGetSystemDataByName(am_model.$sys, "C_Product46");
	am_model.am_stream_R_Grinder2_1 = symGetSystemDataByName(am_model.$sys, "stream_R_Grinder2_1");
	am_model.am_modelsys = symGetSystemDataByName(am_model.$sys, "modelsys");
	am_model.am_VI_PipeLength$var = symGetSystemDataByName(am_model.$sys, "VI_PipeLength");
	am_model.am_VI_PipeLength$var->data = (void*)&am_model.am_VI_PipeLength;
	am_model.am_OL_FixtureAvailable = symGetSystemDataByName(am_model.$sys, "OL_FixtureAvailable");
	am_model.am_VI_MAXbefortoolchange$var = symGetSystemDataByName(am_model.$sys, "VI_MAXbefortoolchange");
	am_model.am_VI_MAXbefortoolchange$var->data = (void*)&am_model.am_VI_MAXbefortoolchange;
	am_model.am_R_Maintenance = symGetSystemDataByName(am_model.$sys, "R_Maintenance");
	am_model.am_L_DownCutters = symGetSystemDataByName(am_model.$sys, "L_DownCutters");
	am_model.am_P_Measure = symGetSystemDataByName(am_model.$sys, "P_Measure");
	am_model.am_OL_WaitBatchUnloading = symGetSystemDataByName(am_model.$sys, "OL_WaitBatchUnloading");
	am_model.am_P_Polisher = symGetSystemDataByName(am_model.$sys, "P_Polisher");
	am_model.am_L_DownPolishers = symGetSystemDataByName(am_model.$sys, "L_DownPolishers");
	am_model.am_Q_FixtureInPolisher = symGetSystemDataByName(am_model.$sys, "Q_FixtureInPolisher");
	am_model.am_R_Measure = symGetSystemDataByName(am_model.$sys, "R_Measure");
	am_model.am_Q_Polisher = symGetSystemDataByName(am_model.$sys, "Q_Polisher");
	am_model.am_R_Polisher = symGetSystemDataByName(am_model.$sys, "R_Polisher");
	am_model.am_Q_Measure = symGetSystemDataByName(am_model.$sys, "Q_Measure");
	am_model.am_stream_R_Cutter_1 = symGetSystemDataByName(am_model.$sys, "stream_R_Cutter_1");
	am_model.am_AI_index$att = symGetSystemDataByName(am_model.$sys, "AI_index");
	am_model.am_Q_Buffer40 = symGetSystemDataByName(am_model.$sys, "Q_Buffer40");
	am_model.am_VI_NumberofTurns1$var = symGetSystemDataByName(am_model.$sys, "VI_NumberofTurns1");
	am_model.am_VI_NumberofTurns1$var->data = (void*)&am_model.am_VI_NumberofTurns1;
	am_model.am_P_DownTimeGrinder1 = symGetSystemDataByName(am_model.$sys, "P_DownTimeGrinder1");
	am_model.am_R_Cutter = symGetSystemDataByName(am_model.$sys, "R_Cutter");
	am_model.am_Q_Cutter = symGetSystemDataByName(am_model.$sys, "Q_Cutter");
	am_model.am_P_Cutter = symGetSystemDataByName(am_model.$sys, "P_Cutter");
	am_model.am_OL_CutterWait = symGetSystemDataByName(am_model.$sys, "OL_CutterWait");
	am_model.am_L_Product49 = symGetSystemDataByName(am_model.$sys, "L_Product49");
	am_model.am_OL_WaitForCutter = symGetSystemDataByName(am_model.$sys, "OL_WaitForCutter");
	am_model.am_stream0 = symGetSystemDataByName(am_model.$sys, "stream0");
	am_model.am_P_Turner1 = symGetSystemDataByName(am_model.$sys, "P_Turner1");
	am_model.am_P_DownTimePolishers = symGetSystemDataByName(am_model.$sys, "P_DownTimePolishers");
	am_model.am_Q_Turner1 = symGetSystemDataByName(am_model.$sys, "Q_Turner1");
	am_model.am_R_Turner1 = symGetSystemDataByName(am_model.$sys, "R_Turner1");
	am_model.am_Q_DummySurface = symGetSystemDataByName(am_model.$sys, "Q_DummySurface");
	am_model.am_Q_Conveyor = symGetSystemDataByName(am_model.$sys, "Q_Conveyor");
	am_model.am_R_Inspector = symGetSystemDataByName(am_model.$sys, "R_Inspector");
	am_model.am_C_Product49 = symGetSystemDataByName(am_model.$sys, "C_Product49");
	am_model.am_stream_R_Inspector_1 = symGetSystemDataByName(am_model.$sys, "stream_R_Inspector_1");
	am_model.am_Q_UnloadingArea = symGetSystemDataByName(am_model.$sys, "Q_UnloadingArea");
	am_model.am_L_Product40 = symGetSystemDataByName(am_model.$sys, "L_Product40");
	am_model.am_VI_BatchSize$var = symGetSystemDataByName(am_model.$sys, "VI_BatchSize");
	am_model.am_VI_BatchSize$var->data = (void*)&am_model.am_VI_BatchSize;
	am_model.am_R_TnSoperator = symGetSystemDataByName(am_model.$sys, "R_TnSoperator");
	am_model.am_stream_R_Surface_1 = symGetSystemDataByName(am_model.$sys, "stream_R_Surface_1");
	am_model.am_stream_R_CutOperator_1 = symGetSystemDataByName(am_model.$sys, "stream_R_CutOperator_1");
	am_model.am_C_Product40 = symGetSystemDataByName(am_model.$sys, "C_Product40");
	am_model.am_stream_R_TnSoperator_1 = symGetSystemDataByName(am_model.$sys, "stream_R_TnSoperator_1");
	am_model.am_Q_WareHouse = symGetSystemDataByName(am_model.$sys, "Q_WareHouse");
	am_model.am_VI_ArrivingTime$var = symGetSystemDataByName(am_model.$sys, "VI_ArrivingTime");
	am_model.am_VI_ArrivingTime$var->data = (void*)&am_model.am_VI_ArrivingTime;
	am_model.am_P_DownTimeCutters = symGetSystemDataByName(am_model.$sys, "P_DownTimeCutters");
	am_model.am_P_WareHouse = symGetSystemDataByName(am_model.$sys, "P_WareHouse");
	am_model.am_VI_LoadingTime$var = symGetSystemDataByName(am_model.$sys, "VI_LoadingTime");
	am_model.am_VI_LoadingTime$var->data = (void*)&am_model.am_VI_LoadingTime;
	am_model.am_VI_CycleTimePolisher$var = symGetSystemDataByName(am_model.$sys, "VI_CycleTimePolisher");
	am_model.am_VI_CycleTimePolisher = (int32*)xcalloc(4, sizeof(*am_model.am_VI_CycleTimePolisher));
	am_model.am_VI_CycleTimePolisher$var->data = (void*)am_model.am_VI_CycleTimePolisher;
	am_model.am_P_Grinder2 = symGetSystemDataByName(am_model.$sys, "P_Grinder2");
	am_model.am_OPCQuality$var = symGetSystemDataByName(am_model.$sys, "OPCQuality");
	am_model.am_OPCQuality$var->data = (void*)&am_model.am_OPCQuality;
	am_model.am_AI_PolisherIndex$att = symGetSystemDataByName(am_model.$sys, "AI_PolisherIndex");
	am_model.am_R_Grinder2 = symGetSystemDataByName(am_model.$sys, "R_Grinder2");
	am_model.am_Q_Buffer1 = symGetSystemDataByName(am_model.$sys, "Q_Buffer1");
	am_model.am_Q_Grinder2 = symGetSystemDataByName(am_model.$sys, "Q_Grinder2");
	am_model.am_P_DownTimePolisher = symGetSystemDataByName(am_model.$sys, "P_DownTimePolisher");
	am_model.am_VI_NumberofTurns2$var = symGetSystemDataByName(am_model.$sys, "VI_NumberofTurns2");
	am_model.am_VI_NumberofTurns2$var->data = (void*)&am_model.am_VI_NumberofTurns2;
	am_model.am_stream_R_Maintenance_1 = symGetSystemDataByName(am_model.$sys, "stream_R_Maintenance_1");
	am_model.am_OL_WaitUnloadingArea = symGetSystemDataByName(am_model.$sys, "OL_WaitUnloadingArea");
	am_model.am_R_Grinder1 = symGetSystemDataByName(am_model.$sys, "R_Grinder1");
	am_model.am_A_QptrPolisher$att = symGetSystemDataByName(am_model.$sys, "A_QptrPolisher");
	am_model.am_Q_Grinder1 = symGetSystemDataByName(am_model.$sys, "Q_Grinder1");
	am_model.am_P_Grinder1 = symGetSystemDataByName(am_model.$sys, "P_Grinder1");
	am_model.am_OL_WaitBatchSurface = symGetSystemDataByName(am_model.$sys, "OL_WaitBatchSurface");
	am_model.am_OL_FixtureLoad = symGetSystemDataByName(am_model.$sys, "OL_FixtureLoad");
	model_upperlanelogic_init(&am_model);
	model_polisher_init(&am_model);
	model_init_init(&am_model);
	model_downtimes_init(&am_model);
	model_lowerlane_init(&am_model);
	{
		Iter(List, FileList) it = Begin(List, FileList, &((ProcSystem*)am_model.$sys)->files);

	}
	{
		Iter(List, AMTypeList) it = Begin(List, AMTypeList, &((ProcSystem*)am_model.$sys)->types);

		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Acceleration);
		IterValue(List, AMTypeList, it)->valstrfunc = Acceleration_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(block*);
		IterValue(List, AMTypeList, it)->valstrfunc = BlockPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))BlockPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMBlockList*);
		IterValue(List, AMTypeList, it)->valstrfunc = BlockList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ASI_Color);
		IterValue(List, AMTypeList, it)->valstrfunc = Color_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))Color_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Container*);
		IterValue(List, AMTypeList, it)->valstrfunc = ContainerPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ContainerPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMContainerList*);
		IterValue(List, AMTypeList, it)->valstrfunc = ContainerList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(counter*);
		IterValue(List, AMTypeList, it)->valstrfunc = CounterPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))CounterPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Distance);
		IterValue(List, AMTypeList, it)->valstrfunc = Distance_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(iofile*);
		IterValue(List, AMTypeList, it)->valstrfunc = FilePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))FilePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(bgraph*);
		IterValue(List, AMTypeList, it)->valstrfunc = GraphPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))GraphPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(int32);
		IterValue(List, AMTypeList, it)->valstrfunc = Integer_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(label*);
		IterValue(List, AMTypeList, it)->valstrfunc = LabelPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LabelPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(load*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LoadPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLoadList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(loadtype*);
		IterValue(List, AMTypeList, it)->valstrfunc = LoadTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LoadTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(simloc*);
		IterValue(List, AMTypeList, it)->valstrfunc = Location_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))Location_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLocationList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(LocationType*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))LocationTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMLocationTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = LocationTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(State_machine*);
		IterValue(List, AMTypeList, it)->valstrfunc = MonitorPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MonitorPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvMotor*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MotorPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvMotorList*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(MotorType*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))MotorTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMMotorTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = MotorTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ordlist*);
		IterValue(List, AMTypeList, it)->valstrfunc = OrderListPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))OrderListPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Path*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PathPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPathList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AgvPathType*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PathTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMAgvPathTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PathTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Photoeye*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PhotoeyePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPhotoList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(PhotoeyeType*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))PhotoeyeTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMPhotoeyeTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = PhotoeyeTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(process*);
		IterValue(List, AMTypeList, it)->valstrfunc = ProcessPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ProcessPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(queue*);
		IterValue(List, AMTypeList, it)->valstrfunc = QueuePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))QueuePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMQueueList*);
		IterValue(List, AMTypeList, it)->valstrfunc = QueueList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Rate);
		IterValue(List, AMTypeList, it)->valstrfunc = Rate_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(double);
		IterValue(List, AMTypeList, it)->valstrfunc = Real_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(resource*);
		IterValue(List, AMTypeList, it)->valstrfunc = ResourcePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))ResourcePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMResourceList*);
		IterValue(List, AMTypeList, it)->valstrfunc = ResourceList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(SchedJob*);
		IterValue(List, AMTypeList, it)->valstrfunc = SchedJobPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SchedJobPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMSchedJobList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SchedJobList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvSection*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SectionPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvSectionList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvSectionType*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SectionTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMConvSectionTypeList*);
		IterValue(List, AMTypeList, it)->valstrfunc = SectionTypeList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(States*);
		IterValue(List, AMTypeList, it)->valstrfunc = StatePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))StatePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(rnstream*);
		IterValue(List, AMTypeList, it)->valstrfunc = StreamPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))StreamPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(char*);
		IterValue(List, AMTypeList, it)->valstrfunc = String_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMStringList*);
		IterValue(List, AMTypeList, it)->valstrfunc = StringList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(System*);
		IterValue(List, AMTypeList, it)->valstrfunc = SystemPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))SystemPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(table*);
		IterValue(List, AMTypeList, it)->valstrfunc = TablePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TablePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ASITime);
		IterValue(List, AMTypeList, it)->valstrfunc = Time_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(ConvTransfer*);
		IterValue(List, AMTypeList, it)->valstrfunc = TransferPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TransferPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(TransferType*);
		IterValue(List, AMTypeList, it)->valstrfunc = TransferTypePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))TransferTypePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(vehicle*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehiclePtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))VehiclePtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMVehicleList*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehicleList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(VehSeg*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehSegPtr_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc  = (void (*)(char*))VehSegPtr_strvalfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(AMVehSegList*);
		IterValue(List, AMTypeList, it)->valstrfunc = VehSegList_valstrfunc;
		IterInc(List, AMTypeList, it);
		IterValue(List, AMTypeList, it)->size = sizeof(Velocity);
		IterValue(List, AMTypeList, it)->valstrfunc = Velocity_valstrfunc;
		IterValue(List, AMTypeList, it)->strvalfunc = str2String;
	}

}

