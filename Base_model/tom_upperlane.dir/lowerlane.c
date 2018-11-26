// lowerlane.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.19
// Model name:	tom_upperlane
// Model path:	C:\Users\tomgy\SimOfProd\Project\MPR271_project\tom_upperlane.dir\
// Generated:	Mon Nov 26 16:38:56 2018
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
	AMDebuggerBeginRoutine("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", localactor);
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
	case Step 12: goto Label12;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 2);
			if (OrdGetCurConts(am2_OL_WaitForBatch) < am2_VI_BatchSize - 1) {
				{
					AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 4);
					return waitorder(am2_OL_WaitForBatch, this, P_SurfaceTreatment_arriving, Step 2, am_localargs);
Label2: ; // Step 2
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 5);
					pushppa(this, P_SurfaceTreatment_arriving, Step 3, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_DummySurface);
					return Continue; // go move into territory
Label3: ; // Step 3
				}
				{
					AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 6);
					return waitorder(am2_OL_WaitBatchSurface, this, P_SurfaceTreatment_arriving, Step 4, am_localargs);
Label4: ; // Step 4
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 7);
					pushppa(this, P_SurfaceTreatment_arriving, Step 5, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_DummyUnloadingArea);
					return Continue; // go move into territory
Label5: ; // Step 5
				}
				{
					AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 8);
					return waitorder(am2_OL_WaitBatchUnloading, this, P_SurfaceTreatment_arriving, Step 6, am_localargs);
Label6: ; // Step 6
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 9);
					this->nextproc = am2_P_Cooling; /* send to ... */
					EntityChanged(W_LOAD);
					retval = Continue;
					goto LabelRet;
				}
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 12);
			order(am2_VI_BatchSize - 1, am2_OL_WaitForBatch, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 13);
			pushppa(this, P_SurfaceTreatment_arriving, Step 7, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Surface);
			return Continue; // go move into territory
Label7: ; // Step 7
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 15);
			if (am2_VI_NumberCycles == 4) {
				{
					AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 17);
					if (waitfor(ToModelTime(uniform1(am2_stream0, 545, 95), UNITSECONDS), this, P_SurfaceTreatment_arriving, Step 8, am_localargs) == Delayed)
						return Delayed;
Label8: ; // Step 8
				}
				{
					AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 18);
					am2_VI_NumberCycles = 0;
					EntityChanged(0x01000000);
				}
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 21);
			return usefor(am2_R_Surface, 1, this, P_SurfaceTreatment_arriving, Step 9, am_localargs, ToModelTime(700, UNITSECONDS));
Label9: ; // Step 9
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 23);
			if (QueGetCurConts(am2_Q_UnloadingArea) > 0) {
				AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 24);
				return waitorder(am2_OL_WaitUnloadingArea, this, P_SurfaceTreatment_arriving, Step 10, am_localargs);
Label10: ; // Step 10
				if (!this->inLeaveProc && this->nextproc) {
					retval = Continue;
					goto LabelRet;
				}
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 26);
			order(am2_VI_BatchSize - 1, am2_OL_WaitBatchSurface, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 27);
			pushppa(this, P_SurfaceTreatment_arriving, Step 11, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_UnloadingArea);
			return Continue; // go move into territory
Label11: ; // Step 11
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 29);
			return usefor(am2_R_TnSoperator, 1, this, P_SurfaceTreatment_arriving, Step 12, am_localargs, ToModelTime(5, UNITSECONDS));
Label12: ; // Step 12
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 30);
			order(am2_VI_BatchSize - 1, am2_OL_WaitBatchUnloading, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor, 31);
			this->nextproc = am2_P_Cooling; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceTreatment", P_SurfaceTreatment_arriving, localactor);
	return retval;
} /* end of P_SurfaceTreatment_arriving */

static int32
P_Cooling_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Cooling", localactor);
	AMDebuggerParams("tom_upperlane.P_Cooling", P_Cooling_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Cooling", P_Cooling_arriving, localactor, 35);
			pushppa(this, P_Cooling_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Cooling);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Cooling", P_Cooling_arriving, localactor, 36);
			if (QueGetCurConts(am2_Q_UnloadingArea) == 0 && QueGetCurConts(am2_Q_DummyUnloadingArea) == 0) {
				AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Cooling", P_Cooling_arriving, localactor, 37);
				order(1, am2_OL_WaitUnloadingArea, NULL, NULL);		// Place an order
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Cooling", P_Cooling_arriving, localactor, 39);
			if (waitfor(ToModelTime(uniform1(am2_stream0, 10, 1), UNITMINUTES), this, P_Cooling_arriving, Step 3, am_localargs) == Delayed)
				return Delayed;
Label3: ; // Step 3
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Cooling", P_Cooling_arriving, localactor, 40);
			this->nextproc = am2_P_Measure; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Cooling", P_Cooling_arriving, localactor);
	return retval;
} /* end of P_Cooling_arriving */

static int32
P_Measure_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", localactor);
	AMDebuggerParams("tom_upperlane.P_Measure", P_Measure_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 44);
			pushppa(this, P_Measure_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Measure);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 45);
			if (waitfor(ToModelTime(80, UNITSECONDS), this, P_Measure_arriving, Step 3, am_localargs) == Delayed)
				return Delayed;
Label3: ; // Step 3
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 46);
			if (LdGetType(this) == am2_L_Product40) {
				AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 47);
				this->attribute->am2_AI_ProdType = 1;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 48);
			if (LdGetType(this) == am2_L_Product46) {
				AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 49);
				this->attribute->am2_AI_ProdType = 2;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 50);
			if (LdGetType(this) == am2_L_Product49) {
				AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 51);
				this->attribute->am2_AI_ProdType = 3;
				EntityChanged(0x00000040);
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 53);
			if (this->attribute->am2_AI_ProdType != am2_VI_PrevMeasure) {
				AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 54);
				if (waitfor(ToModelTime(uniform1(am2_stream0, 72.500000000000000, 12.500000000000000), UNITSECONDS), this, P_Measure_arriving, Step 4, am_localargs) == Delayed)
					return Delayed;
Label4: ; // Step 4
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 56);
			am2_VI_PrevMeasure = this->attribute->am2_AI_ProdType;
			EntityChanged(0x01000000);
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 58);
			if (waitfor(ToModelTime(295, UNITSECONDS), this, P_Measure_arriving, Step 5, am_localargs) == Delayed)
				return Delayed;
Label5: ; // Step 5
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor, 60);
			this->nextproc = am2_P_SurfaceInspection; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Measure", P_Measure_arriving, localactor);
	return retval;
} /* end of P_Measure_arriving */


typedef struct {
	double freq;
	int32 value;
} Oneof0;

static Oneof0 List0[] = {
	{ 5, 0},
	{ 100, 1}
};

static int32
oneofFunc0(load* this)
{
	int ind = 0;
	Oneof0* list = List0;
	double sample = getdrand(am2_stream0) * 100;

	tprintf(tfp, "In oneof\n");
	while (list->freq < sample) {
		ind++;
		list++;
	}
	return List0[ind].value;
}

static int32
P_SurfaceInspection_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceInspection", localactor);
	AMDebuggerParams("tom_upperlane.P_SurfaceInspection", P_SurfaceInspection_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceInspection", P_SurfaceInspection_arriving, localactor, 64);
			pushppa(this, P_SurfaceInspection_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_SurfaceInspection);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceInspection", P_SurfaceInspection_arriving, localactor, 65);
			return usefor(am2_R_Inspector, 1, this, P_SurfaceInspection_arriving, Step 3, am_localargs, ToModelTime(uniform1(am2_stream0, 4.2500000000000000, 0.75000000000000000), UNITMINUTES));
Label3: ; // Step 3
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceInspection", P_SurfaceInspection_arriving, localactor, 66);
			this->attribute->am2_AI_InspectionResult = oneofFunc0(this);
			EntityChanged(0x00000040);
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceInspection", P_SurfaceInspection_arriving, localactor, 67);
			if (this->attribute->am2_AI_InspectionResult == 0) {
				AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceInspection", P_SurfaceInspection_arriving, localactor, 68);
				this->nextproc = am2_die; /* send to ... */
				EntityChanged(W_LOAD);
				retval = Continue;
				goto LabelRet;
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceInspection", P_SurfaceInspection_arriving, localactor, 69);
			this->nextproc = am2_P_Packaging; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("lowerlane.m", "Arriving procedure", "tom_upperlane.P_SurfaceInspection", P_SurfaceInspection_arriving, localactor);
	return retval;
} /* end of P_SurfaceInspection_arriving */

static int32
P_Packaging_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Packaging", localactor);
	AMDebuggerParams("tom_upperlane.P_Packaging", P_Packaging_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Packaging", P_Packaging_arriving, localactor, 73);
			pushppa(this, P_Packaging_arriving, Step 2, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Packaging);
			return Continue; // go move into territory
Label2: ; // Step 2
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Packaging", P_Packaging_arriving, localactor, 74);
			if (LdGetType(this) == am2_L_Product40) {
				AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Packaging", P_Packaging_arriving, localactor, 75);
				{
					int result = inccount(am2_C_Product40, 1, this, P_Packaging_arriving, Step 3, am_localargs);
					if (result != Continue) return result;
Label3: ;	// Step 3
				}
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Packaging", P_Packaging_arriving, localactor, 76);
			if (LdGetType(this) == am2_L_Product46) {
				AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Packaging", P_Packaging_arriving, localactor, 77);
				{
					int result = inccount(am2_C_Product46, 1, this, P_Packaging_arriving, Step 4, am_localargs);
					if (result != Continue) return result;
Label4: ;	// Step 4
				}
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Packaging", P_Packaging_arriving, localactor, 78);
			if (LdGetType(this) == am2_L_Product49) {
				AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Packaging", P_Packaging_arriving, localactor, 79);
				{
					int result = inccount(am2_C_Product49, 1, this, P_Packaging_arriving, Step 5, am_localargs);
					if (result != Continue) return result;
Label5: ;	// Step 5
				}
			}
		}
		{
			AMDebugger("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Packaging", P_Packaging_arriving, localactor, 80);
			this->nextproc = am2_die; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("lowerlane.m", "Arriving procedure", "tom_upperlane.P_Packaging", P_Packaging_arriving, localactor);
	return retval;
} /* end of P_Packaging_arriving */



/* init function for lowerlane.m */
void
model_lowerlane_init(struct model_struct* data)
{
	data->am_P_SurfaceTreatment->aprc = P_SurfaceTreatment_arriving;
	data->am_P_Cooling->aprc = P_Cooling_arriving;
	data->am_P_Measure->aprc = P_Measure_arriving;
	data->am_P_SurfaceInspection->aprc = P_SurfaceInspection_arriving;
	data->am_P_Packaging->aprc = P_Packaging_arriving;
}

