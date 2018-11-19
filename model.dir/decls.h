// decls.h
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.19
// Model name:	model
// Model path:	D:\Oliver\MPSYS\SOPS\ModelingExercise\model.dir\
// Generated:	Thu Nov 15 10:12:26 2018
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
	process* am_die;
	ordlist* am_OL_WaitBatchPainting;
	process* am_P_Lathes;
	loadtype* am_L_Init;
	queue* am_Q_Painting;
	resource* am_R_Painting;
	attribute* am_A_QptrCutter$att;
	process* am_P_Painting;
	resource* am_R_Lathe;
	queue* am_Q_Lathe;
	process* am_P_Init;
	process* am_P_DownTimePainting;
	variable* am_OPCTimestamp$var;
	char* am_OPCTimestamp;
	rnstream* am_stream_R_Painting_1;
	process* am_P_Unloading;
	queue* am_Q_BufferLathe;
	queue* am_Q_PaintingUnloading;
	System* am_modelsys;
	queue* am_Q_Final;
	ordlist* am_OL_PaintingUnloading;
	loadtype* am_L_TubeB;
	loadtype* am_L_DownCutters;
	attribute* am_A_QptrLathe$att;
	ordlist* am_OL_PaintBufferFull;
	rnstream* am_stream_R_Cutter_1;
	attribute* am_AI_index$att;
	ordlist* am_OL_PaintBatch;
	loadtype* am_L_TubeA;
	queue* am_Q_DummyPainting;
	variable* am_VI_PrevType$var;
	int32 *am_VI_PrevType;
	resource* am_R_Cutter;
	queue* am_Q_Cutter;
	attribute* am_AI_Type$att;
	process* am_P_Cutting;
	attribute* am_AI_CutterIndex$att;
	attribute* am_AI_Cuts$att;
	rnstream* am_stream0;
	process* am_P_DownTimeLathes;
	variable* am_VI_BatchSize$var;
	int32 am_VI_BatchSize;
	variable* am_VI_CycleTimeCutter$var;
	int32 (*am_VI_CycleTimeCutter)[4];
	attribute* am_AI_LatheIndex$att;
	queue* am_Q_BufferPainting;
	process* am_P_Creation;
	loadtype* am_L_Product;
	rnstream* am_stream_R_Lathe_1;
	variable* am_VI_ArrivingTime$var;
	int32 *am_VI_ArrivingTime;
	variable* am_VI_SetupCutter$var;
	int32 (*am_VI_SetupCutter)[3];
	process* am_P_DownTimeCutters;
	loadtype* am_L_DownLathes;
	variable* am_OPCQuality$var;
	int32 am_OPCQuality;
	loadtype* am_L_DownPainting;
};
extern struct model_struct am_model;
void initglobs0();
#endif // __DECLS_H__
