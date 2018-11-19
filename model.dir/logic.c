// logic.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.19
// Model name:	model
// Model path:	D:\Oliver\MPSYS\SOPS\ModelingExercise\model.dir\
// Generated:	Mon Nov 19 09:22:31 2018
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


#include "cdecls.h"


static int32
model_initialize()
{
	{
		{
			create_l(1, am2_L_Init, am2_P_Init, 0.0);
		}
		{
			create_l(1, am2_L_DownPainting, am2_P_DownTimePainting, 0.0);
		}
		{
			create_l(2, am2_L_DownCutters, am2_P_DownTimeCutters, 0.0);
		}
		{
			create_l(3, am2_L_DownLathes, am2_P_DownTimeLathes, 0.0);
		}
		{
			return 0;
		}
	}
LabelRet: ;
} /* end of model_initialize */

static int32
P_Init_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("logic.m", "Arriving procedure", "model.P_Init", localactor);
	AMDebuggerParams("model.P_Init", P_Init_arriving, localactor, 0, NULL, NULL, NULL);
	{
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 13);
			am2_VI_CycleTimeCutter[1][1] = 5;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 14);
			am2_VI_CycleTimeCutter[1][2] = 8;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 15);
			am2_VI_CycleTimeCutter[1][3] = 10;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 18);
			am2_VI_CycleTimeCutter[2][1] = 5;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 19);
			am2_VI_CycleTimeCutter[2][2] = 8;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 20);
			am2_VI_CycleTimeCutter[2][3] = 9;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 24);
			am2_VI_SetupCutter[1][1] = 240;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 25);
			am2_VI_SetupCutter[1][2] = 7;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 26);
			am2_VI_SetupCutter[2][1] = 260;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 27);
			am2_VI_SetupCutter[2][2] = 5;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 29);
			am2_VI_ArrivingTime[1] = 85;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 30);
			am2_VI_ArrivingTime[2] = 80;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 32);
			QueSetCapacity(am2_Q_DummyPainting, am2_VI_BatchSize - 1);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 33);
			QueSetCapacity(am2_Q_PaintingUnloading, am2_VI_BatchSize);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 34);
			QueSetCapacity(am2_Q_BufferPainting, am2_VI_BatchSize);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 37);
			create_l(1, am2_L_TubeA, am2_P_Creation, 0.0);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor, 38);
			create_l(1, am2_L_TubeB, am2_P_Creation, 0.0);
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("logic.m", "Arriving procedure", "model.P_Init", P_Init_arriving, localactor);
	return retval;
} /* end of P_Init_arriving */

static int32
P_Creation_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("logic.m", "Arriving procedure", "model.P_Creation", localactor);
	AMDebuggerParams("model.P_Creation", P_Creation_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Creation", P_Creation_arriving, localactor, 42);
			if (LdGetType(this) == am2_L_TubeA) {
				AMDebugger("logic.m", "Arriving procedure", "model.P_Creation", P_Creation_arriving, localactor, 43);
				this->attribute->am2_AI_Type = 1;
				EntityChanged(0x00000040);
			}
			else {
				AMDebugger("logic.m", "Arriving procedure", "model.P_Creation", P_Creation_arriving, localactor, 45);
				this->attribute->am2_AI_Type = 2;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Creation", P_Creation_arriving, localactor, 48);
			while (1 == 1) {
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Creation", P_Creation_arriving, localactor, 49);
					clone(this, 1, am2_P_Cutting, NULL);
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Creation", P_Creation_arriving, localactor, 50);
					if (waitfor(ToModelTime(am2_VI_ArrivingTime[ValidIndex("am_model.am_VI_ArrivingTime", this->attribute->am2_AI_Type, 2)], UNITMINUTES), this, P_Creation_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("logic.m", "Arriving procedure", "model.P_Creation", P_Creation_arriving, localactor);
	return retval;
} /* end of P_Creation_arriving */

static int32
P_Cutting_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("logic.m", "Arriving procedure", "model.P_Cutting", localactor);
	AMDebuggerParams("model.P_Cutting", P_Cutting_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 65);
			if (LdGetType(this) == am2_L_TubeA) {
				AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 66);
				this->attribute->am2_AI_CutterIndex = 1;
				EntityChanged(0x00000040);
			}
			else {
				AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 68);
				this->attribute->am2_AI_CutterIndex = 2;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 69);
			pushppa(this, P_Cutting_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, &(am2_Q_Cutter[ValidIndex("am_model.am_Q_Cutter", this->attribute->am2_AI_CutterIndex, 2)]));
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 72);
			if (am2_VI_PrevType[ValidIndex("am_model.am_VI_PrevType", this->attribute->am2_AI_CutterIndex, 2)] != this->attribute->am2_AI_Type) {
				AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 73);
				return usefor(&(am2_R_Cutter[ValidIndex("am_model.am_R_Cutter", this->attribute->am2_AI_CutterIndex, 2)]), 1, this, P_Cutting_arriving, Step 3, am_localargs, ToModelTime(normal1(am2_stream0, am2_VI_SetupCutter[ValidIndex("am_model.am_VI_SetupCutter", this->attribute->am2_AI_Type, 2)][1], am2_VI_SetupCutter[ValidIndex("am_model.am_VI_SetupCutter", this->attribute->am2_AI_Type, 2)][2]), UNITSECONDS));
Label3: ; // Step 3
			}
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 77);
			while (this->attribute->am2_AI_Cuts < 10) {
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 78);
					return usefor(&(am2_R_Cutter[ValidIndex("am_model.am_R_Cutter", this->attribute->am2_AI_CutterIndex, 2)]), 1, this, P_Cutting_arriving, Step 4, am_localargs, ToModelTime(triangular1(am2_stream0, am2_VI_CycleTimeCutter[ValidIndex("am_model.am_VI_CycleTimeCutter", this->attribute->am2_AI_Type, 2)][1], am2_VI_CycleTimeCutter[ValidIndex("am_model.am_VI_CycleTimeCutter", this->attribute->am2_AI_Type, 2)][2], am2_VI_CycleTimeCutter[ValidIndex("am_model.am_VI_CycleTimeCutter", this->attribute->am2_AI_Type, 2)][3]), UNITMINUTES));
Label4: ; // Step 4
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 81);
					if (QueGetRemCap(am2_Q_BufferPainting) < 1) {
						AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 82);
						return waitorder(am2_OL_PaintBufferFull, this, P_Cutting_arriving, Step 5, am_localargs);
Label5: ; // Step 5
						if (!this->inLeaveProc && this->nextproc) {
							retval = Continue;
							goto LabelRet;
						}
					}
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 83);
					create_l(1, am2_L_Product, am2_P_Painting, 0.0);
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 84);
					this->attribute->am2_AI_Cuts += 1;
					EntityChanged(0x00000040);
				}
			}
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 88);
			am2_VI_PrevType[ValidIndex("am_model.am_VI_PrevType", this->attribute->am2_AI_CutterIndex, 2)] = this->attribute->am2_AI_Type;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor, 91);
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("logic.m", "Arriving procedure", "model.P_Cutting", P_Cutting_arriving, localactor);
	return retval;
} /* end of P_Cutting_arriving */

static int32
P_Painting_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("logic.m", "Arriving procedure", "model.P_Painting", localactor);
	AMDebuggerParams("model.P_Painting", P_Painting_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	case Step 7: goto Label7;
	case Step 8: goto Label8;
	case Step 9: goto Label9;
	case Step 10: goto Label10;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 95);
			pushppa(this, P_Painting_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_BufferPainting);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 98);
			if (OrdGetCurConts(am2_OL_PaintBatch) < am2_VI_BatchSize - 1) {
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 99);
					return waitorder(am2_OL_PaintBatch, this, P_Painting_arriving, Step 3, am_localargs);
Label3: ; // Step 3
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 100);
					pushppa(this, P_Painting_arriving, Step 4, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_DummyPainting);
					return Continue; // go move into territory
Label4: ; // Step 4
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 101);
					return waitorder(am2_OL_WaitBatchPainting, this, P_Painting_arriving, Step 5, am_localargs);
Label5: ; // Step 5
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 102);
					this->nextproc = am2_P_Unloading; /* send to ... */
					EntityChanged(W_LOAD);
					retval = Continue;
					goto LabelRet;
				}
			}
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 105);
			order(am2_VI_BatchSize - 1, am2_OL_PaintBatch, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 106);
			pushppa(this, P_Painting_arriving, Step 6, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Painting);
			return Continue; // go move into territory
Label6: ; // Step 6
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 108);
			order(am2_VI_BatchSize, am2_OL_PaintBufferFull, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 111);
			return usefor(am2_R_Painting, 1, this, P_Painting_arriving, Step 7, am_localargs, ToModelTime(uniform1(am2_stream0, 85, 15), UNITSECONDS));
Label7: ; // Step 7
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 114);
			return usefor(am2_R_Painting, 1, this, P_Painting_arriving, Step 8, am_localargs, ToModelTime((normal1(am2_stream0, 3, 0.20000000000000001)) * am2_VI_BatchSize, UNITMINUTES));
Label8: ; // Step 8
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 116);
			if (QueGetCurConts(am2_Q_PaintingUnloading) > 0) {
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 117);
					return waitorder(am2_OL_PaintingUnloading, this, P_Painting_arriving, Step 9, am_localargs);
Label9: ; // Step 9
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
			}
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 120);
			pushppa(this, P_Painting_arriving, Step 10, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_PaintingUnloading);
			return Continue; // go move into territory
Label10: ; // Step 10
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 122);
			order(am2_VI_BatchSize - 1, am2_OL_WaitBatchPainting, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor, 124);
			this->nextproc = am2_P_Lathes; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("logic.m", "Arriving procedure", "model.P_Painting", P_Painting_arriving, localactor);
	return retval;
} /* end of P_Painting_arriving */

static int32
P_Unloading_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("logic.m", "Arriving procedure", "model.P_Unloading", localactor);
	AMDebuggerParams("model.P_Unloading", P_Unloading_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Unloading", P_Unloading_arriving, localactor, 128);
			pushppa(this, P_Unloading_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_PaintingUnloading);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Unloading", P_Unloading_arriving, localactor, 129);
			this->nextproc = am2_P_Lathes; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("logic.m", "Arriving procedure", "model.P_Unloading", P_Unloading_arriving, localactor);
	return retval;
} /* end of P_Unloading_arriving */

static int32
P_Lathes_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("logic.m", "Arriving procedure", "model.P_Lathes", localactor);
	AMDebuggerParams("model.P_Lathes", P_Lathes_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			queue* am_locVar;
			AMQueueList* am_locList = NULL;

			AMDebugger("logic.m", "Arriving procedure", "model.P_Lathes", P_Lathes_arriving, localactor, 134);
			ListAppendItem(QueueList, am_locList, &(am2_Q_BufferLathe[1]));
			ListAppendItem(QueueList, am_locList, &(am2_Q_BufferLathe[2]));
			ListAppendItem(QueueList, am_locList, &(am2_Q_BufferLathe[3]));
			if (Size(List, _List, am_locList)) {
				int32 am_locVal;
				AMQueueListItem* locIter;
				int i = 0;
				int first = getirand(am2_stream0) % am_locList->numItems;

				for (locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
				}
				am_locVar = locIter->item;
				am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
				this->attribute->am2_A_QptrLathe = am_locVar;
				EntityChanged(0x00000040);
				for (locIter = locIter->next; locIter; locIter = locIter->next) {
					am_locVar = locIter->item;
					if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
						this->attribute->am2_A_QptrLathe = am_locVar;
						EntityChanged(0x00000040);
						am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
					}
				}
				for (i = 0, locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
					am_locVar = locIter->item;
					if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
						this->attribute->am2_A_QptrLathe = am_locVar;
						EntityChanged(0x00000040);
						am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
					}
				}
				ListRemoveAllAndFree(QueueList, am_locList);
			} else
				this->attribute->am2_A_QptrLathe = NULL;
				EntityChanged(0x00000040);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Lathes", P_Lathes_arriving, localactor, 138);
			pushppa(this, P_Lathes_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, this->attribute->am2_A_QptrLathe);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Lathes", P_Lathes_arriving, localactor, 140);
			if (QueGetCurConts(am2_Q_PaintingUnloading) == 0) {
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_Lathes", P_Lathes_arriving, localactor, 141);
					order(1, am2_OL_PaintingUnloading, NULL, NULL);		// Place an order
				}
			}
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Lathes", P_Lathes_arriving, localactor, 144);
			this->attribute->am2_AI_LatheIndex = QueGetIndex(ValidPtr(this->attribute->am2_A_QptrLathe, 50, queue*));
			EntityChanged(0x00000040);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Lathes", P_Lathes_arriving, localactor, 145);
			pushppa(this, P_Lathes_arriving, Step 3, am_localargs);
			pushppa(this, inqueue, Step 1, &(am2_Q_Lathe[ValidIndex("am_model.am_Q_Lathe", this->attribute->am2_AI_LatheIndex, 3)]));
			return Continue; // go move into territory
Label3: ; // Step 3
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Lathes", P_Lathes_arriving, localactor, 148);
			return usefor(&(am2_R_Lathe[ValidIndex("am_model.am_R_Lathe", this->attribute->am2_AI_LatheIndex, 3)]), 1, this, P_Lathes_arriving, Step 4, am_localargs, ToModelTime(triangular1(am2_stream0, 10, 12, 17), UNITMINUTES));
Label4: ; // Step 4
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Lathes", P_Lathes_arriving, localactor, 150);
			pushppa(this, P_Lathes_arriving, Step 5, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Final);
			return Continue; // go move into territory
Label5: ; // Step 5
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_Lathes", P_Lathes_arriving, localactor, 153);
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("logic.m", "Arriving procedure", "model.P_Lathes", P_Lathes_arriving, localactor);
	return retval;
} /* end of P_Lathes_arriving */

static int32
P_DownTimePainting_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("logic.m", "Arriving procedure", "model.P_DownTimePainting", localactor);
	AMDebuggerParams("model.P_DownTimePainting", P_DownTimePainting_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimePainting", P_DownTimePainting_arriving, localactor, 157);
			while (1 == 1) {
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimePainting", P_DownTimePainting_arriving, localactor, 158);
					if (waitfor(ToModelTime(normal1(am2_stream0, 10, 0.50000000000000000), UNITHOURS), this, P_DownTimePainting_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimePainting", P_DownTimePainting_arriving, localactor, 159);
					downrsrc(am2_R_Painting);
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimePainting", P_DownTimePainting_arriving, localactor, 160);
					if (waitfor(ToModelTime(normal1(am2_stream0, 20, 3.8999999999999999), UNITMINUTES), this, P_DownTimePainting_arriving, Step 3, am_localargs) == Delayed)
						return Delayed;
Label3: ; // Step 3
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimePainting", P_DownTimePainting_arriving, localactor, 161);
					uprsrc(am2_R_Painting);
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("logic.m", "Arriving procedure", "model.P_DownTimePainting", P_DownTimePainting_arriving, localactor);
	return retval;
} /* end of P_DownTimePainting_arriving */


typedef struct {
	int32 value;
} Nextof0;

static Nextof0 List0[] = {
	1,
	2
};

static int32
nextofFunc0(load* this)
{
	static int ind = 1;

	tprintf(tfp, "In nextof\n");
	ind = (ind+1) % 2;
	return List0[ind].value;
}

static int32
P_DownTimeCutters_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("logic.m", "Arriving procedure", "model.P_DownTimeCutters", localactor);
	AMDebuggerParams("model.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 166);
			this->attribute->am2_AI_index = nextofFunc0(this);
			EntityChanged(0x00000040);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 167);
			while (1 == 1) {
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 168);
					if (waitfor(ToModelTime(exponential(am2_stream0, 6), UNITHOURS), this, P_DownTimeCutters_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 169);
					downrsrc(&(am2_R_Cutter[ValidIndex("am_model.am_R_Cutter", this->attribute->am2_AI_index, 2)]));
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 170);
					if (waitfor(ToModelTime(triangular1(am2_stream0, 15, 25, 40), UNITMINUTES), this, P_DownTimeCutters_arriving, Step 3, am_localargs) == Delayed)
						return Delayed;
Label3: ; // Step 3
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 171);
					uprsrc(&(am2_R_Cutter[ValidIndex("am_model.am_R_Cutter", this->attribute->am2_AI_index, 2)]));
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("logic.m", "Arriving procedure", "model.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor);
	return retval;
} /* end of P_DownTimeCutters_arriving */


typedef struct {
	int32 value;
} Nextof1;

static Nextof1 List1[] = {
	1,
	2,
	3
};

static int32
nextofFunc1(load* this)
{
	static int ind = 2;

	tprintf(tfp, "In nextof\n");
	ind = (ind+1) % 3;
	return List1[ind].value;
}

static int32
P_DownTimeLathes_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("logic.m", "Arriving procedure", "model.P_DownTimeLathes", localactor);
	AMDebuggerParams("model.P_DownTimeLathes", P_DownTimeLathes_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeLathes", P_DownTimeLathes_arriving, localactor, 176);
			this->attribute->am2_AI_index = nextofFunc1(this);
			EntityChanged(0x00000040);
		}
		{
			AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeLathes", P_DownTimeLathes_arriving, localactor, 177);
			while (1 == 1) {
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeLathes", P_DownTimeLathes_arriving, localactor, 178);
					if (waitfor(ToModelTime(normal1(am2_stream0, 3.5000000000000000, 0.20000000000000001), UNITHOURS), this, P_DownTimeLathes_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeLathes", P_DownTimeLathes_arriving, localactor, 179);
					downrsrc(&(am2_R_Lathe[ValidIndex("am_model.am_R_Lathe", this->attribute->am2_AI_index, 3)]));
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeLathes", P_DownTimeLathes_arriving, localactor, 180);
					if (waitfor(ToModelTime(normal1(am2_stream0, 10, 1.8999999999999999), UNITMINUTES), this, P_DownTimeLathes_arriving, Step 3, am_localargs) == Delayed)
						return Delayed;
Label3: ; // Step 3
				}
				{
					AMDebugger("logic.m", "Arriving procedure", "model.P_DownTimeLathes", P_DownTimeLathes_arriving, localactor, 181);
					uprsrc(&(am2_R_Lathe[ValidIndex("am_model.am_R_Lathe", this->attribute->am2_AI_index, 3)]));
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("logic.m", "Arriving procedure", "model.P_DownTimeLathes", P_DownTimeLathes_arriving, localactor);
	return retval;
} /* end of P_DownTimeLathes_arriving */



/* init function for logic.m */
void
model_logic_init(struct model_struct* data)
{
	((ProcSystem*)data->$sys)->modelInitPtr = model_initialize;
	data->am_P_Init->aprc = P_Init_arriving;
	data->am_P_Creation->aprc = P_Creation_arriving;
	data->am_P_Cutting->aprc = P_Cutting_arriving;
	data->am_P_Painting->aprc = P_Painting_arriving;
	data->am_P_Unloading->aprc = P_Unloading_arriving;
	data->am_P_Lathes->aprc = P_Lathes_arriving;
	data->am_P_DownTimePainting->aprc = P_DownTimePainting_arriving;
	data->am_P_DownTimeCutters->aprc = P_DownTimeCutters_arriving;
	data->am_P_DownTimeLathes->aprc = P_DownTimeLathes_arriving;
}

