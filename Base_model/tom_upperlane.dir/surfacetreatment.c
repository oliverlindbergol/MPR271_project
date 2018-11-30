// surfacetreatment.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.19
// Model name:	tom_upperlane
// Model path:	C:\Users\tomgy\SimOfProd\Hopslagning1\tom_upperlane.dir\
// Generated:	Fri Nov 23 08:44:50 2018
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
P_SurfaceTreatment_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", localactor);
	AMDebuggerParams("tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 0, NULL, NULL, NULL);
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
	case Step 11: goto Label11;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 2);
			if (OrdGetCurConts(am2_OL_WaitForBatch) < am2_VI_BatchSize - 1) {
				{
					AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 4);
					return waitorder(am2_OL_WaitForBatch, this, P_SurfaceTreatment_arriving, Step 2, am_localargs);
Label2: ; // Step 2
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 5);
					pushppa(this, P_SurfaceTreatment_arriving, Step 3, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_DummySurface);
					return Continue; // go move into territory
Label3: ; // Step 3
				}
				{
					AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 6);
					return waitorder(am2_OL_WaitBatchSurface, this, P_SurfaceTreatment_arriving, Step 4, am_localargs);
Label4: ; // Step 4
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 7);
					pushppa(this, P_SurfaceTreatment_arriving, Step 5, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_DummyUnloadingArea);
					return Continue; // go move into territory
Label5: ; // Step 5
				}
				{
					AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 8);
					return waitorder(am2_OL_WaitBatchUnloading, this, P_SurfaceTreatment_arriving, Step 6, am_localargs);
Label6: ; // Step 6
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 9);
					this->nextproc = am2_P_Cooling; /* send to ... */
					EntityChanged(W_LOAD);
					retval = Continue;
					goto LabelRet;
				}
			}
		}
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 12);
			order(am2_VI_BatchSize - 1, am2_OL_WaitForBatch, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 13);
			pushppa(this, P_SurfaceTreatment_arriving, Step 7, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Surface);
			return Continue; // go move into territory
Label7: ; // Step 7
		}
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 15);
			if (am2_VI_NumberCycles == 4) {
				{
					AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 17);
					if (waitfor(ToModelTime(uniform1(am2_stream0, 545, 95), UNITSECONDS), this, P_SurfaceTreatment_arriving, Step 8, am_localargs) == Delayed)
						return Delayed;
Label8: ; // Step 8
				}
				{
					AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 18);
					am2_VI_NumberCycles = 0;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 21);
			return usefor(am2_R_Surface, 1, this, P_SurfaceTreatment_arriving, Step 9, am_localargs, ToModelTime(700, UNITSECONDS));
Label9: ; // Step 9
		}
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 22);
			order(am2_VI_BatchSize - 1, am2_OL_WaitBatchSurface, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 23);
			pushppa(this, P_SurfaceTreatment_arriving, Step 10, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_UnloadingArea);
			return Continue; // go move into territory
Label10: ; // Step 10
		}
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 24);
			return usefor(am2_R_TnSoperator, 1, this, P_SurfaceTreatment_arriving, Step 11, am_localargs, ToModelTime(5, UNITSECONDS));
Label11: ; // Step 11
		}
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 25);
			order(am2_VI_BatchSize - 1, am2_OL_WaitBatchUnloading, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 26);
			this->nextproc = am2_P_Cooling; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor);
	return retval;
} /* end of P_SurfaceTreatment_arriving */

static int32
P_Cooling_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_Cooling", localactor);
	AMDebuggerParams("tom_upperlane.P_Cooling", P_Cooling_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_Cooling", P_Cooling_arriving, localactor, 30);
			pushppa(this, P_Cooling_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_final);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_Cooling", P_Cooling_arriving, localactor, 31);
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("surfacetreatment.m", "Arriving procedure", "tom_upperlane.P_Cooling", P_Cooling_arriving, localactor);
	return retval;
} /* end of P_Cooling_arriving */



/* init function for surfacetreatment.m */
void
model_surfacetreatment_init(struct model_struct* data)
{
	data->am_P_SurfaceTreatment->aprc = P_SurfaceTreatment_arriving;
	data->am_P_Cooling->aprc = P_Cooling_arriving;
}

