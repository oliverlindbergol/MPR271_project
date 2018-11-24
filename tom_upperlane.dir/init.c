// init.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.19
// Model name:	tom_upperlane
// Model path:	D:\Oliver\MPSYS\SOPS\Project\tom_upperlane.dir\
// Generated:	Sat Nov 24 12:11:14 2018
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
			create_l(2, am2_L_DownCutters, am2_P_DownTimeCutters, 0.0);
		}
		{
			create_l(1, am2_L_DownPolisher, am2_P_DownTimePolisher, 0.0);
		}
		{
			create_l(3, am2_L_DownPolishers, am2_P_DownTimePolishers, 0.0);
		}
		{
			create_l(1, am2_L_DownTurner1, am2_P_DownTimeTurner1, 0.0);
		}
		{
			create_l(1, am2_L_DownTurner2, am2_P_DownTimeTurner2, 0.0);
		}
		{
			create_l(1, am2_L_DownGrinder1, am2_P_DownTimeGrinder1, 0.0);
		}
		{
			create_l(1, am2_L_DownGrinder2, am2_P_DownTimeGrinder2, 0.0);
		}
		{
			create_l(1, am2_L_DownTimeMeasure, am2_P_DownTimeMeasure, 0.0);
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
	AMDebuggerBeginRoutine("init.m", "Arriving procedure", "tom_upperlane.P_Init", localactor);
	AMDebuggerParams("tom_upperlane.P_Init", P_Init_arriving, localactor, 0, NULL, NULL, NULL);
	{
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 19);
			am2_VI_CycleTimePolisher[1] = 490;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 20);
			am2_VI_CycleTimePolisher[2] = 540;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 21);
			am2_VI_CycleTimePolisher[3] = 570;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 23);
			am2_VI_ArrivingTime = 8;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 24);
			am2_VI_PipeLength = 42;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 25);
			am2_VI_LoadingTime = 160;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 26);
			am2_VI_FixtureTravelTime = 5;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 28);
			am2_VI_BatchSize = 7;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 30);
			QueSetCapacity(am2_Q_WareHouse, 50);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 31);
			QueSetCapacity(am2_Q_Buffer3, 7);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 32);
			QueSetCapacity(am2_Q_Buffer40, 8);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 33);
			QueSetCapacity(am2_Q_Buffer46, 8);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 34);
			QueSetCapacity(am2_Q_Buffer49, 8);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 35);
			QueSetCapacity(am2_Q_Fixture, 3);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 36);
			QueSetCapacity(am2_Q_Conveyor, 3);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 37);
			QueSetCapacity(am2_Q_FixtureInPolisher, 3);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 38);
			QueSetCapacity(am2_Q_UnloadingArea, 7);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 39);
			QueSetCapacity(am2_Q_DummyUnloadingArea, am2_VI_BatchSize - 1);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 40);
			QueSetCapacity(am2_Q_DummySurface, am2_VI_BatchSize - 1);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 41);
			QueSetCapacity(am2_Q_Cooling, 9);
			EntityChanged(0x00010000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 46);
			am2_VI_Numberofcuts[1] = 9;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 47);
			am2_VI_Numberofcuts[2] = 8;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 48);
			am2_VI_Numberofcuts[3] = 7;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 50);
			am2_VI_MAXbefortoolchange = 8000;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 54);
			create_l(1, am2_L_Pipe, am2_P_RawMaterialArrival, 0.0);
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor, 55);
			create_l(3, am2_L_Fixture, am2_P_Loading, 0.0);
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("init.m", "Arriving procedure", "tom_upperlane.P_Init", P_Init_arriving, localactor);
	return retval;
} /* end of P_Init_arriving */

static int32
P_RawMaterialArrival_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("init.m", "Arriving procedure", "tom_upperlane.P_RawMaterialArrival", localactor);
	AMDebuggerParams("tom_upperlane.P_RawMaterialArrival", P_RawMaterialArrival_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_RawMaterialArrival", P_RawMaterialArrival_arriving, localactor, 60);
			while (1 == 1) {
				{
					AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_RawMaterialArrival", P_RawMaterialArrival_arriving, localactor, 61);
					clone(this, 10, am2_P_WareHouse, NULL);
				}
				{
					AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_RawMaterialArrival", P_RawMaterialArrival_arriving, localactor, 62);
					if (waitfor(ToModelTime(am2_VI_ArrivingTime, UNITHOURS), this, P_RawMaterialArrival_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("init.m", "Arriving procedure", "tom_upperlane.P_RawMaterialArrival", P_RawMaterialArrival_arriving, localactor);
	return retval;
} /* end of P_RawMaterialArrival_arriving */

static int32
P_WareHouse_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("init.m", "Arriving procedure", "tom_upperlane.P_WareHouse", localactor);
	AMDebuggerParams("tom_upperlane.P_WareHouse", P_WareHouse_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_WareHouse", P_WareHouse_arriving, localactor, 67);
			pushppa(this, P_WareHouse_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_WareHouse);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_WareHouse", P_WareHouse_arriving, localactor, 68);
			if (QueGetRemCap(ValidPtr(&(am2_Q_Cutter[1]), 50, queue*)) == 0 && QueGetRemCap(ValidPtr(&(am2_Q_Cutter[2]), 50, queue*)) == 0) {
				AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_WareHouse", P_WareHouse_arriving, localactor, 69);
				return waitorder(am2_OL_WaitForCutter, this, P_WareHouse_arriving, Step 3, am_localargs);
Label3: ; // Step 3
				if (!this->inLeaveProc && this->nextproc) {
					retval = Continue;
					goto LabelRet;
				}
			}
		}
		{
			AMDebugger("init.m", "Arriving procedure", "tom_upperlane.P_WareHouse", P_WareHouse_arriving, localactor, 70);
			this->nextproc = am2_P_Cutter; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("init.m", "Arriving procedure", "tom_upperlane.P_WareHouse", P_WareHouse_arriving, localactor);
	return retval;
} /* end of P_WareHouse_arriving */



/* init function for init.m */
void
model_init_init(struct model_struct* data)
{
	((ProcSystem*)data->$sys)->modelInitPtr = model_initialize;
	data->am_P_Init->aprc = P_Init_arriving;
	data->am_P_RawMaterialArrival->aprc = P_RawMaterialArrival_arriving;
	data->am_P_WareHouse->aprc = P_WareHouse_arriving;
}

