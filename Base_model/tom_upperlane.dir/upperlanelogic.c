// upperlanelogic.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.19
// Model name:	tom_upperlane
// Model path:	C:\Users\tomgy\SimOfProd\Project\MPR271_project\tom_upperlane.dir\
// Generated:	Mon Nov 26 16:26:39 2018
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



typedef struct {
	double freq;
	int32 value;
} Oneof0;

static Oneof0 List0[] = {
	{ 0.35, 3},
	{ 0.8, 2},
	{ 1, 1}
};

static int32
oneofFunc0(load* this)
{
	int ind = 0;
	Oneof0* list = List0;
	double sample = getdrand(am2_stream0) * 1;

	tprintf(tfp, "In oneof\n");
	while (list->freq < sample) {
		ind++;
		list++;
	}
	return List0[ind].value;
}

static int32
P_Cutter_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", localactor);
	AMDebuggerParams("tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 13);
			this->attribute->am2_AI_CutType = oneofFunc0(this);
			EntityChanged(0x00000040);
		}
		{
			queue* am_locVar;
			AMQueueList* am_locList = NULL;

			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 15);
			ListAppendItem(QueueList, am_locList, &(am2_Q_Cutter[1]));
			ListAppendItem(QueueList, am_locList, &(am2_Q_Cutter[2]));
			if (Size(List, _List, am_locList)) {
				int32 am_locVal;
				AMQueueListItem* locIter;
				int i = 0;
				int first = getirand(am2_stream0) % am_locList->numItems;

				for (locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
				}
				am_locVar = locIter->item;
				am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
				this->attribute->am2_A_QPtr = am_locVar;
				EntityChanged(0x00000040);
				for (locIter = locIter->next; locIter; locIter = locIter->next) {
					am_locVar = locIter->item;
					if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
						this->attribute->am2_A_QPtr = am_locVar;
						EntityChanged(0x00000040);
						am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
					}
				}
				for (i = 0, locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
					am_locVar = locIter->item;
					if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
						this->attribute->am2_A_QPtr = am_locVar;
						EntityChanged(0x00000040);
						am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
					}
				}
				ListRemoveAllAndFree(QueueList, am_locList);
			} else
				this->attribute->am2_A_QPtr = NULL;
				EntityChanged(0x00000040);
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 17);
			this->attribute->am2_AI_Index = QueGetIndex(ValidPtr(this->attribute->am2_A_QPtr, 50, queue*));
			EntityChanged(0x00000040);
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 20);
			pushppa(this, P_Cutter_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, &(am2_Q_Cutter[ValidIndex("am_model.am_Q_Cutter", this->attribute->am2_AI_Index, 2)]));
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 21);
			if (getrsrc(am2_R_CutOperator, 1, this, P_Cutter_arriving, Step 3, am_localargs) == Delayed)
				return Delayed;  // go wait for resource
Label3: ; // Step 3
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 22);
			return usefor(&(am2_R_Cutter[ValidIndex("am_model.am_R_Cutter", this->attribute->am2_AI_Index, 2)]), 1, this, P_Cutter_arriving, Step 4, am_localargs, ToModelTime(normal1(am2_stream0, 55, 0.10000000000000001), UNITSECONDS));
Label4: ; // Step 4
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 23);
			freersrc(am2_R_CutOperator, 1, this);
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 26);
			while (this->attribute->am2_AI_CutsDone < am2_VI_Numberofcuts[ValidIndex("am_model.am_VI_Numberofcuts", this->attribute->am2_AI_CutType, 3)] - 1) {
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 27);
					return usefor(&(am2_R_Cutter[ValidIndex("am_model.am_R_Cutter", this->attribute->am2_AI_Index, 2)]), 1, this, P_Cutter_arriving, Step 5, am_localargs, ToModelTime(160, UNITSECONDS));
Label5: ; // Step 5
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 32);
					if (QueGetRemCap(am2_Q_Buffer1) < 1) {
						{
							AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 34);
							return waitorder(am2_OL_CutterWait, this, P_Cutter_arriving, Step 6, am_localargs);
Label6: ; // Step 6
							if (!this->inLeaveProc && this->nextproc) {
								retval = Continue;
								goto LabelRet;
							}
						}
					}
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 37);
					if (this->attribute->am2_AI_CutType == 1) {
						AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 38);
						create_l(1, am2_L_Product40, am2_P_Turner1, 0.0);
					}
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 39);
					if (this->attribute->am2_AI_CutType == 2) {
						AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 40);
						create_l(1, am2_L_Product46, am2_P_Turner1, 0.0);
					}
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 42);
					if (this->attribute->am2_AI_CutType == 3) {
						AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 43);
						create_l(1, am2_L_Product49, am2_P_Turner1, 0.0);
					}
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 45);
					this->attribute->am2_AI_CutsDone += 1;
					EntityChanged(0x00000040);
				}
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 49);
			order(1, am2_OL_WaitForCutter, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor, 50);
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Cutter", P_Cutter_arriving, localactor);
	return retval;
} /* end of P_Cutter_arriving */

static int32
P_Turner1_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", localactor);
	AMDebuggerParams("tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	case Step 7: goto Label7;
	case Step 8: goto Label8;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 56);
			pushppa(this, P_Turner1_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Buffer1);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 57);
			pushppa(this, P_Turner1_arriving, Step 3, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Turner1);
			return Continue; // go move into territory
Label3: ; // Step 3
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 58);
			order(1, am2_OL_CutterWait, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 59);
			if (LdGetType(this) == am2_L_Product40) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 60);
				this->attribute->am2_AI_ProdType = 1;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 61);
			if (LdGetType(this) == am2_L_Product46) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 62);
				this->attribute->am2_AI_ProdType = 2;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 63);
			if (LdGetType(this) == am2_L_Product49) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 64);
				this->attribute->am2_AI_ProdType = 3;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 66);
			if (this->attribute->am2_AI_ProdType != am2_VI_PrevTurner) {
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 67);
					if (getrsrc(am2_R_TnSoperator, 1, this, P_Turner1_arriving, Step 4, am_localargs) == Delayed)
						return Delayed;  // go wait for resource
Label4: ; // Step 4
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 68);
					return usefor(am2_R_Turner1, 1, this, P_Turner1_arriving, Step 5, am_localargs, ToModelTime(triangular1(am2_stream0, 10, 12, 20), UNITSECONDS));
Label5: ; // Step 5
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 69);
					freersrc(am2_R_TnSoperator, 1, this);
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 70);
					am2_VI_PrevTurner = this->attribute->am2_AI_ProdType;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 73);
			if (am2_VI_NumberofTurns1 >= am2_VI_MAXbefortoolchange) {
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 74);
					if (getrsrc(am2_R_TnSoperator, 1, this, P_Turner1_arriving, Step 6, am_localargs) == Delayed)
						return Delayed;  // go wait for resource
Label6: ; // Step 6
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 75);
					return usefor(am2_R_Turner1, 1, this, P_Turner1_arriving, Step 7, am_localargs, ToModelTime(normal1(am2_stream0, 310, 30), UNITSECONDS));
Label7: ; // Step 7
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 76);
					freersrc(am2_R_TnSoperator, 1, this);
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 77);
					am2_VI_NumberofTurns1 = 0;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 80);
			return usefor(am2_R_Turner1, 1, this, P_Turner1_arriving, Step 8, am_localargs, ToModelTime(290, UNITSECONDS));
Label8: ; // Step 8
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 81);
			am2_VI_NumberofTurns1 += 1;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor, 85);
			this->nextproc = am2_P_Turner2; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner1", P_Turner1_arriving, localactor);
	return retval;
} /* end of P_Turner1_arriving */

static int32
P_Turner2_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", localactor);
	AMDebuggerParams("tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	case Step 7: goto Label7;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 90);
			pushppa(this, P_Turner2_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Turner2);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 92);
			if (LdGetType(this) == am2_L_Product40) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 93);
				this->attribute->am2_AI_ProdType = 40;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 94);
			if (LdGetType(this) == am2_L_Product46) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 95);
				this->attribute->am2_AI_ProdType = 46;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 96);
			if (LdGetType(this) == am2_L_Product49) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 97);
				this->attribute->am2_AI_ProdType = 49;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 99);
			if (this->attribute->am2_AI_ProdType != am2_VI_PrevTurner) {
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 100);
					if (getrsrc(am2_R_TnSoperator, 1, this, P_Turner2_arriving, Step 3, am_localargs) == Delayed)
						return Delayed;  // go wait for resource
Label3: ; // Step 3
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 101);
					return usefor(am2_R_Turner2, 1, this, P_Turner2_arriving, Step 4, am_localargs, ToModelTime(triangular1(am2_stream0, 10, 12, 20), UNITSECONDS));
Label4: ; // Step 4
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 102);
					freersrc(am2_R_TnSoperator, 1, this);
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 103);
					am2_VI_PrevTurner = this->attribute->am2_AI_ProdType;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 106);
			if (am2_VI_NumberofTurns2 >= am2_VI_MAXbefortoolchange) {
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 107);
					if (getrsrc(am2_R_TnSoperator, 1, this, P_Turner2_arriving, Step 5, am_localargs) == Delayed)
						return Delayed;  // go wait for resource
Label5: ; // Step 5
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 108);
					return usefor(am2_R_Turner1, 1, this, P_Turner2_arriving, Step 6, am_localargs, ToModelTime(normal1(am2_stream0, 310, 30), UNITSECONDS));
Label6: ; // Step 6
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 109);
					freersrc(am2_R_TnSoperator, 1, this);
				}
				{
					AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 110);
					am2_VI_NumberofTurns2 = 0;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 113);
			return usefor(am2_R_Turner1, 1, this, P_Turner2_arriving, Step 7, am_localargs, ToModelTime(290, UNITSECONDS));
Label7: ; // Step 7
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 114);
			am2_VI_NumberofTurns2 += 1;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor, 119);
			this->nextproc = am2_P_Grinder1; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Turner2", P_Turner2_arriving, localactor);
	return retval;
} /* end of P_Turner2_arriving */

static int32
P_Grinder1_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", localactor);
	AMDebuggerParams("tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	case Step 5: goto Label5;
	case Step 6: goto Label6;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor, 124);
			pushppa(this, P_Grinder1_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Buffer2);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor, 125);
			pushppa(this, P_Grinder1_arriving, Step 3, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Grinder1);
			return Continue; // go move into territory
Label3: ; // Step 3
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor, 127);
			if (LdGetType(this) == am2_L_Product40) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor, 128);
				return usefor(am2_R_Grinder1, 1, this, P_Grinder1_arriving, Step 4, am_localargs, ToModelTime(270, UNITSECONDS));
Label4: ; // Step 4
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor, 129);
			if (LdGetType(this) == am2_L_Product46) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor, 130);
				return usefor(am2_R_Grinder1, 1, this, P_Grinder1_arriving, Step 5, am_localargs, ToModelTime(290, UNITSECONDS));
Label5: ; // Step 5
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor, 131);
			if (LdGetType(this) == am2_L_Product49) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor, 132);
				return usefor(am2_R_Grinder1, 1, this, P_Grinder1_arriving, Step 6, am_localargs, ToModelTime(330, UNITSECONDS));
Label6: ; // Step 6
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor, 139);
			this->nextproc = am2_P_Grinder2; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder1", P_Grinder1_arriving, localactor);
	return retval;
} /* end of P_Grinder1_arriving */

static int32
P_Grinder2_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder2", localactor);
	AMDebuggerParams("tom_upperlane.P_Grinder2", P_Grinder2_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder2", P_Grinder2_arriving, localactor, 145);
			pushppa(this, P_Grinder2_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Grinder2);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder2", P_Grinder2_arriving, localactor, 147);
			if (LdGetType(this) == am2_L_Product40) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder2", P_Grinder2_arriving, localactor, 148);
				return usefor(am2_R_Grinder2, 1, this, P_Grinder2_arriving, Step 3, am_localargs, ToModelTime(270, UNITSECONDS));
Label3: ; // Step 3
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder2", P_Grinder2_arriving, localactor, 149);
			if (LdGetType(this) == am2_L_Product46) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder2", P_Grinder2_arriving, localactor, 150);
				return usefor(am2_R_Grinder2, 1, this, P_Grinder2_arriving, Step 4, am_localargs, ToModelTime(290, UNITSECONDS));
Label4: ; // Step 4
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder2", P_Grinder2_arriving, localactor, 151);
			if (LdGetType(this) == am2_L_Product49) {
				AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder2", P_Grinder2_arriving, localactor, 152);
				return usefor(am2_R_Grinder2, 1, this, P_Grinder2_arriving, Step 5, am_localargs, ToModelTime(330, UNITSECONDS));
Label5: ; // Step 5
			}
		}
		{
			AMDebugger("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder2", P_Grinder2_arriving, localactor, 158);
			this->nextproc = am2_P_Polisher; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("upperlanelogic.m", "Arriving procedure", "tom_upperlane.P_Grinder2", P_Grinder2_arriving, localactor);
	return retval;
} /* end of P_Grinder2_arriving */



/* init function for upperlanelogic.m */
void
model_upperlanelogic_init(struct model_struct* data)
{
	data->am_P_Cutter->aprc = P_Cutter_arriving;
	data->am_P_Turner1->aprc = P_Turner1_arriving;
	data->am_P_Turner2->aprc = P_Turner2_arriving;
	data->am_P_Grinder1->aprc = P_Grinder1_arriving;
	data->am_P_Grinder2->aprc = P_Grinder2_arriving;
}

