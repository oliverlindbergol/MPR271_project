// decls.h
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.19
// Model name:	tom_upperlane
// Model path:	D:\Oliver\MPSYS\SOPS\Project\test\tom_upperlane.dir\
// Generated:	Thu Nov 29 17:36:56 2018
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


#ifndef __DECLS_H__
#define __DECLS_H__

#include "user.h"
char* Acceleration_valstrfunc(void*);
Acceleration Acceleration_strvalfunc(char*);
char* BlockPtr_valstrfunc(void*);
block* BlockPtr_strvalfunc(char*);
char* BlockList_valstrfunc(void*);
char* Color_valstrfunc(void*);
ASI_Color Color_strvalfunc(char*);
char* ContainerPtr_valstrfunc(void*);
Container* ContainerPtr_strvalfunc(char*);
char* ContainerList_valstrfunc(void*);
char* CounterPtr_valstrfunc(void*);
counter* CounterPtr_strvalfunc(char*);
char* Distance_valstrfunc(void*);
Distance Distance_strvalfunc(char*);
char* FilePtr_valstrfunc(void*);
iofile* FilePtr_strvalfunc(char*);
char* GraphPtr_valstrfunc(void*);
bgraph* GraphPtr_strvalfunc(char*);
char* Integer_valstrfunc(void*);
int32 Integer_strvalfunc(char*);
char* LabelPtr_valstrfunc(void*);
label* LabelPtr_strvalfunc(char*);
char* LoadPtr_valstrfunc(void*);
load* LoadPtr_strvalfunc(char*);
char* LoadList_valstrfunc(void*);
char* LoadTypePtr_valstrfunc(void*);
loadtype* LoadTypePtr_strvalfunc(char*);
char* Location_valstrfunc(void*);
simloc* Location_strvalfunc(char*);
char* LocationList_valstrfunc(void*);
char* LocationTypePtr_valstrfunc(void*);
LocationType* LocationTypePtr_strvalfunc(char*);
char* LocationTypeList_valstrfunc(void*);
char* MonitorPtr_valstrfunc(void*);
State_machine* MonitorPtr_strvalfunc(char*);
char* MotorPtr_valstrfunc(void*);
ConvMotor* MotorPtr_strvalfunc(char*);
char* MotorList_valstrfunc(void*);
char* MotorTypePtr_valstrfunc(void*);
MotorType* MotorTypePtr_strvalfunc(char*);
char* MotorTypeList_valstrfunc(void*);
char* OrderListPtr_valstrfunc(void*);
ordlist* OrderListPtr_strvalfunc(char*);
char* PathPtr_valstrfunc(void*);
Path* PathPtr_strvalfunc(char*);
char* PathList_valstrfunc(void*);
char* PathTypePtr_valstrfunc(void*);
AgvPathType* PathTypePtr_strvalfunc(char*);
char* PathTypeList_valstrfunc(void*);
char* PhotoeyePtr_valstrfunc(void*);
Photoeye* PhotoeyePtr_strvalfunc(char*);
char* PhotoeyeList_valstrfunc(void*);
char* PhotoeyeTypePtr_valstrfunc(void*);
PhotoeyeType* PhotoeyeTypePtr_strvalfunc(char*);
char* PhotoeyeTypeList_valstrfunc(void*);
char* ProcessPtr_valstrfunc(void*);
process* ProcessPtr_strvalfunc(char*);
char* QueuePtr_valstrfunc(void*);
queue* QueuePtr_strvalfunc(char*);
char* QueueList_valstrfunc(void*);
char* Rate_valstrfunc(void*);
Rate Rate_strvalfunc(char*);
char* Real_valstrfunc(void*);
double Real_strvalfunc(char*);
char* ResourcePtr_valstrfunc(void*);
resource* ResourcePtr_strvalfunc(char*);
char* ResourceList_valstrfunc(void*);
char* SchedJobPtr_valstrfunc(void*);
SchedJob* SchedJobPtr_strvalfunc(char*);
char* SchedJobList_valstrfunc(void*);
char* SectionPtr_valstrfunc(void*);
ConvSection* SectionPtr_strvalfunc(char*);
char* SectionList_valstrfunc(void*);
char* SectionTypePtr_valstrfunc(void*);
ConvSectionType* SectionTypePtr_strvalfunc(char*);
char* SectionTypeList_valstrfunc(void*);
char* StatePtr_valstrfunc(void*);
States* StatePtr_strvalfunc(char*);
char* StreamPtr_valstrfunc(void*);
rnstream* StreamPtr_strvalfunc(char*);
char* String_valstrfunc(void*);
char* String_strvalfunc(char*);
char* StringList_valstrfunc(void*);
char* SystemPtr_valstrfunc(void*);
System* SystemPtr_strvalfunc(char*);
char* TablePtr_valstrfunc(void*);
table* TablePtr_strvalfunc(char*);
char* Time_valstrfunc(void*);
ASITime Time_strvalfunc(char*);
char* TransferPtr_valstrfunc(void*);
ConvTransfer* TransferPtr_strvalfunc(char*);
char* TransferTypePtr_valstrfunc(void*);
TransferType* TransferTypePtr_strvalfunc(char*);
char* VehiclePtr_valstrfunc(void*);
vehicle* VehiclePtr_strvalfunc(char*);
char* VehicleList_valstrfunc(void*);
char* VehSegPtr_valstrfunc(void*);
VehSeg* VehSegPtr_strvalfunc(char*);
char* VehSegList_valstrfunc(void*);
char* Velocity_valstrfunc(void*);
Velocity Velocity_strvalfunc(char*);
struct model_struct {
	System* $sys;
	queue* am_Q_DummyUnloadingArea;
	queue* am_Q_Packaging;
	process* am_P_Packaging;
	rnstream* am_stream_R_Grinder1_1;
	queue* am_Q_Buffer2;
	process* am_die;
	loadtype* am_L_DownTurner2;
	attribute* am_AI_InspectionResult$att;
	attribute* am_AI_CutType$att;
	queue* am_Q_LoadingProduct;
	attribute* am_AI_ProdType$att;
	queue* am_Q_LoadingFixture;
	variable* am_VI_PrevTurner$var;
	int32 am_VI_PrevTurner;
	loadtype* am_L_DownGrinder1;
	queue* am_Q_Buffer49;
	queue* am_Q_Buffer3;
	queue* am_Q_FixtureUnloading;
	loadtype* am_L_Fixture;
	loadtype* am_L_Init;
	queue* am_Q_Buffer46;
	loadtype* am_L_DownTurner1;
	variable* am_VI_NumberCycles$var;
	int32 am_VI_NumberCycles;
	loadtype* am_L_DownGrinder2;
	attribute* am_AI_CutsDone$att;
	queue* am_Q_Fixture;
	process* am_P_Init;
	loadtype* am_L_DownPolisher;
	loadtype* am_L_Pipe;
	process* am_P_SurfaceTreatment;
	process* am_P_DownTimeTurner1;
	rnstream* am_stream_R_Turner1_1;
	variable* am_OPCTimestamp$var;
	char* am_OPCTimestamp;
	ordlist* am_OL_WaitForBatch;
	process* am_P_RawMaterialArrival;
	queue* am_Q_Surface;
	resource* am_R_Surface;
	loadtype* am_L_DownTimeMeasure;
	resource* am_R_Turner2;
	process* am_P_SurfaceInspection;
	queue* am_Q_Turner2;
	attribute* am_A_QPtr$att;
	process* am_P_Turner2;
	variable* am_VI_PrevMeasure$var;
	int32 am_VI_PrevMeasure;
	queue* am_Q_SurfaceInspection;
	resource* am_R_CutOperator;
	rnstream* am_stream_R_Measure_1;
	process* am_P_DownTimeTurner2;
	queue* am_Q_Unloading;
	process* am_P_DownTimeMeasure;
	process* am_P_DownTimeGrinder2;
	rnstream* am_stream_R_Turner2_1;
	process* am_P_Loading;
	rnstream* am_stream_R_Polisher_1;
	ordlist* am_OL_FixtureUnload;
	ordlist* am_OL_ProductLoad;
	queue* am_Q_Cooling;
	loadtype* am_L_Product46;
	variable* am_VI_Numberofcuts$var;
	int32 *am_VI_Numberofcuts;
	attribute* am_AI_Index$att;
	process* am_P_Cooling;
	variable* am_VI_FixtureTravelTime$var;
	int32 am_VI_FixtureTravelTime;
	counter* am_C_Product46;
	rnstream* am_stream_R_Grinder2_1;
	System* am_modelsys;
	variable* am_VI_PipeLength$var;
	int32 am_VI_PipeLength;
	ordlist* am_OL_FixtureAvailable;
	variable* am_VI_MAXbefortoolchange$var;
	int32 am_VI_MAXbefortoolchange;
	resource* am_R_Maintenance;
	loadtype* am_L_DownCutters;
	process* am_P_Measure;
	ordlist* am_OL_WaitBatchUnloading;
	process* am_P_Polisher;
	loadtype* am_L_DownPolishers;
	queue* am_Q_FixtureInPolisher;
	resource* am_R_Measure;
	queue* am_Q_Polisher;
	resource* am_R_Polisher;
	queue* am_Q_Measure;
	rnstream* am_stream_R_Cutter_1;
	attribute* am_AI_index$att;
	queue* am_Q_Buffer40;
	variable* am_VI_NumberofTurns1$var;
	int32 am_VI_NumberofTurns1;
	process* am_P_DownTimeGrinder1;
	resource* am_R_Cutter;
	queue* am_Q_Cutter;
	process* am_P_Cutter;
	ordlist* am_OL_CutterWait;
	loadtype* am_L_Product49;
	ordlist* am_OL_WaitForCutter;
	rnstream* am_stream0;
	process* am_P_Turner1;
	process* am_P_DownTimePolishers;
	ordlist* am_OL_FixtureToConveyor;
	queue* am_Q_Turner1;
	resource* am_R_Turner1;
	queue* am_Q_DummySurface;
	queue* am_Q_Conveyor;
	resource* am_R_Inspector;
	counter* am_C_Product49;
	rnstream* am_stream_R_Inspector_1;
	queue* am_Q_UnloadingArea;
	loadtype* am_L_Product40;
	variable* am_VI_BatchSize$var;
	int32 am_VI_BatchSize;
	resource* am_R_TnSoperator;
	rnstream* am_stream_R_Surface_1;
	rnstream* am_stream_R_CutOperator_1;
	variable* am_VI_PrevTurner1$var;
	int32 am_VI_PrevTurner1;
	counter* am_C_Product40;
	rnstream* am_stream_R_TnSoperator_1;
	queue* am_Q_WareHouse;
	variable* am_VI_ArrivingTime$var;
	int32 am_VI_ArrivingTime;
	process* am_P_DownTimeCutters;
	process* am_P_WareHouse;
	variable* am_VI_LoadingTime$var;
	int32 am_VI_LoadingTime;
	ordlist* am_OL_FixtureMayEnterPolisher;
	variable* am_VI_CycleTimePolisher$var;
	int32 *am_VI_CycleTimePolisher;
	process* am_P_Grinder2;
	variable* am_OPCQuality$var;
	int32 am_OPCQuality;
	attribute* am_AI_PolisherIndex$att;
	resource* am_R_Grinder2;
	queue* am_Q_Buffer1;
	queue* am_Q_Grinder2;
	process* am_P_DownTimePolisher;
	variable* am_VI_NumberofTurns2$var;
	int32 am_VI_NumberofTurns2;
	rnstream* am_stream_R_Maintenance_1;
	variable* am_VI_PrevTurner2$var;
	int32 am_VI_PrevTurner2;
	ordlist* am_OL_WaitUnloadingArea;
	resource* am_R_Grinder1;
	attribute* am_A_QptrPolisher$att;
	queue* am_Q_Grinder1;
	process* am_P_Grinder1;
	ordlist* am_OL_WaitBatchSurface;
	ordlist* am_OL_FixtureLoad;
};
extern struct model_struct am_model;
void initglobs0();
#endif // __DECLS_H__
