// downtimes.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.19
// Model name:	tom_upperlane
// Model path:	D:\Oliver\MPSYS\SOPS\Project\tom_upperlane.dir\
// Generated:	Sat Nov 24 12:19:24 2018
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
	int32 value;
} Nextof0;

static Nextof0 List0[] = {
	1,
	2,
	3
};

static int32
nextofFunc0(load* this)
{
	static int ind = 2;

	tprintf(tfp, "In nextof\n");
	ind = (ind+1) % 3;
	return List0[ind].value;
}

static int32
P_DownTimePolishers_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimePolishers", localactor);
	AMDebuggerParams("tom_upperlane.P_DownTimePolishers", P_DownTimePolishers_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimePolishers", P_DownTimePolishers_arriving, localactor, 2);
			this->attribute->am2_AI_index = nextofFunc0(this);
			EntityChanged(0x00000040);
		}
		{
			AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimePolishers", P_DownTimePolishers_arriving, localactor, 3);
			while (1 == 1) {
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimePolishers", P_DownTimePolishers_arriving, localactor, 4);
					if (waitfor(ToModelTime(exponential(am2_stream0, 90), UNITMINUTES), this, P_DownTimePolishers_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimePolishers", P_DownTimePolishers_arriving, localactor, 5);
					downrsrc(&(am2_R_Polisher[ValidIndex("am_model.am_R_Polisher", this->attribute->am2_AI_index, 3)]));
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimePolishers", P_DownTimePolishers_arriving, localactor, 6);
					return usefor(am2_R_Maintenance, 1, this, P_DownTimePolishers_arriving, Step 3, am_localargs, ToModelTime(gamma1(am2_stream0, 12, 2), UNITMINUTES));
Label3: ; // Step 3
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimePolishers", P_DownTimePolishers_arriving, localactor, 7);
					uprsrc(&(am2_R_Polisher[ValidIndex("am_model.am_R_Polisher", this->attribute->am2_AI_index, 3)]));
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimePolishers", P_DownTimePolishers_arriving, localactor);
	return retval;
} /* end of P_DownTimePolishers_arriving */


typedef struct {
	int32 value;
} Nextof1;

static Nextof1 List1[] = {
	1,
	2
};

static int32
nextofFunc1(load* this)
{
	static int ind = 1;

	tprintf(tfp, "In nextof\n");
	ind = (ind+1) % 2;
	return List1[ind].value;
}

static int32
P_DownTimeCutters_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeCutters", localactor);
	AMDebuggerParams("tom_upperlane.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 12);
			this->attribute->am2_AI_index = nextofFunc1(this);
			EntityChanged(0x00000040);
		}
		{
			AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 13);
			while (1 == 1) {
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 14);
					if (waitfor(ToModelTime(exponential(am2_stream0, 140), UNITMINUTES), this, P_DownTimeCutters_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 15);
					downrsrc(&(am2_R_Cutter[ValidIndex("am_model.am_R_Cutter", this->attribute->am2_AI_index, 2)]));
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 16);
					return usefor(am2_R_Maintenance, 1, this, P_DownTimeCutters_arriving, Step 3, am_localargs, ToModelTime(triangular1(am2_stream0, 12, 30, 35), UNITMINUTES));
Label3: ; // Step 3
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor, 17);
					uprsrc(&(am2_R_Cutter[ValidIndex("am_model.am_R_Cutter", this->attribute->am2_AI_index, 2)]));
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeCutters", P_DownTimeCutters_arriving, localactor);
	return retval;
} /* end of P_DownTimeCutters_arriving */

static int32
P_DownTimeTurner1_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner1", localactor);
	AMDebuggerParams("tom_upperlane.P_DownTimeTurner1", P_DownTimeTurner1_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner1", P_DownTimeTurner1_arriving, localactor, 23);
			while (1 == 1) {
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner1", P_DownTimeTurner1_arriving, localactor, 24);
					if (waitfor(ToModelTime(exponential(am2_stream0, 125), UNITMINUTES), this, P_DownTimeTurner1_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner1", P_DownTimeTurner1_arriving, localactor, 25);
					downrsrc(am2_R_Turner1);
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner1", P_DownTimeTurner1_arriving, localactor, 26);
					return usefor(am2_R_Maintenance, 1, this, P_DownTimeTurner1_arriving, Step 3, am_localargs, ToModelTime(gamma1(am2_stream0, 2, 11), UNITMINUTES));
Label3: ; // Step 3
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner1", P_DownTimeTurner1_arriving, localactor, 27);
					uprsrc(am2_R_Turner1);
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner1", P_DownTimeTurner1_arriving, localactor);
	return retval;
} /* end of P_DownTimeTurner1_arriving */

static int32
P_DownTimeTurner2_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner2", localactor);
	AMDebuggerParams("tom_upperlane.P_DownTimeTurner2", P_DownTimeTurner2_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner2", P_DownTimeTurner2_arriving, localactor, 33);
			while (1 == 1) {
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner2", P_DownTimeTurner2_arriving, localactor, 34);
					if (waitfor(ToModelTime(exponential(am2_stream0, 125), UNITMINUTES), this, P_DownTimeTurner2_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner2", P_DownTimeTurner2_arriving, localactor, 35);
					downrsrc(am2_R_Turner2);
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner2", P_DownTimeTurner2_arriving, localactor, 36);
					return usefor(am2_R_Maintenance, 1, this, P_DownTimeTurner2_arriving, Step 3, am_localargs, ToModelTime(gamma1(am2_stream0, 2, 11), UNITMINUTES));
Label3: ; // Step 3
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner2", P_DownTimeTurner2_arriving, localactor, 37);
					uprsrc(am2_R_Turner2);
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeTurner2", P_DownTimeTurner2_arriving, localactor);
	return retval;
} /* end of P_DownTimeTurner2_arriving */

static int32
P_DownTimeGrinder1_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder1", localactor);
	AMDebuggerParams("tom_upperlane.P_DownTimeGrinder1", P_DownTimeGrinder1_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder1", P_DownTimeGrinder1_arriving, localactor, 43);
			while (1 == 1) {
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder1", P_DownTimeGrinder1_arriving, localactor, 44);
					if (waitfor(ToModelTime(exponential(am2_stream0, 120), UNITMINUTES), this, P_DownTimeGrinder1_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder1", P_DownTimeGrinder1_arriving, localactor, 45);
					downrsrc(am2_R_Grinder1);
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder1", P_DownTimeGrinder1_arriving, localactor, 46);
					return usefor(am2_R_Maintenance, 1, this, P_DownTimeGrinder1_arriving, Step 3, am_localargs, ToModelTime(triangular1(am2_stream0, 12, 18, 35), UNITMINUTES));
Label3: ; // Step 3
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder1", P_DownTimeGrinder1_arriving, localactor, 47);
					uprsrc(am2_R_Grinder1);
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder1", P_DownTimeGrinder1_arriving, localactor);
	return retval;
} /* end of P_DownTimeGrinder1_arriving */

static int32
P_DownTimeGrinder2_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder2", localactor);
	AMDebuggerParams("tom_upperlane.P_DownTimeGrinder2", P_DownTimeGrinder2_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder2", P_DownTimeGrinder2_arriving, localactor, 53);
			while (1 == 1) {
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder2", P_DownTimeGrinder2_arriving, localactor, 54);
					if (waitfor(ToModelTime(exponential(am2_stream0, 120), UNITMINUTES), this, P_DownTimeGrinder2_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder2", P_DownTimeGrinder2_arriving, localactor, 55);
					downrsrc(am2_R_Grinder2);
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder2", P_DownTimeGrinder2_arriving, localactor, 56);
					return usefor(am2_R_Maintenance, 1, this, P_DownTimeGrinder2_arriving, Step 3, am_localargs, ToModelTime(triangular1(am2_stream0, 12, 18, 35), UNITMINUTES));
Label3: ; // Step 3
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder2", P_DownTimeGrinder2_arriving, localactor, 57);
					uprsrc(am2_R_Grinder2);
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeGrinder2", P_DownTimeGrinder2_arriving, localactor);
	return retval;
} /* end of P_DownTimeGrinder2_arriving */

static int32
P_DownTimeMeasure_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeMeasure", localactor);
	AMDebuggerParams("tom_upperlane.P_DownTimeMeasure", P_DownTimeMeasure_arriving, localactor, 0, NULL, NULL, NULL);
	switch (step) { /* Make the step switcher */
	case Step 1: goto Label1;
	case Step 2: goto Label2;
	case Step 3: goto Label3;
	case Step 4: goto Label4;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeMeasure", P_DownTimeMeasure_arriving, localactor, 62);
			while (1 == 1) {
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeMeasure", P_DownTimeMeasure_arriving, localactor, 63);
					if (waitfor(ToModelTime(exponential(am2_stream0, 20), UNITMINUTES), this, P_DownTimeMeasure_arriving, Step 2, am_localargs) == Delayed)
						return Delayed;
Label2: ; // Step 2
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeMeasure", P_DownTimeMeasure_arriving, localactor, 64);
					downrsrc(am2_R_Measure);
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeMeasure", P_DownTimeMeasure_arriving, localactor, 65);
					return usefor(am2_R_Inspector, 1, this, P_DownTimeMeasure_arriving, Step 3, am_localargs, ToModelTime(1, UNITSECONDS));
Label3: ; // Step 3
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeMeasure", P_DownTimeMeasure_arriving, localactor, 66);
					if (waitfor(ToModelTime(2.5000000000000000, UNITMINUTES), this, P_DownTimeMeasure_arriving, Step 4, am_localargs) == Delayed)
						return Delayed;
Label4: ; // Step 4
				}
				{
					AMDebugger("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeMeasure", P_DownTimeMeasure_arriving, localactor, 67);
					uprsrc(am2_R_Measure);
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("downtimes.m", "Arriving procedure", "tom_upperlane.P_DownTimeMeasure", P_DownTimeMeasure_arriving, localactor);
	return retval;
} /* end of P_DownTimeMeasure_arriving */



/* init function for downtimes.m */
void
model_downtimes_init(struct model_struct* data)
{
	data->am_P_DownTimePolishers->aprc = P_DownTimePolishers_arriving;
	data->am_P_DownTimeCutters->aprc = P_DownTimeCutters_arriving;
	data->am_P_DownTimeTurner1->aprc = P_DownTimeTurner1_arriving;
	data->am_P_DownTimeTurner2->aprc = P_DownTimeTurner2_arriving;
	data->am_P_DownTimeGrinder1->aprc = P_DownTimeGrinder1_arriving;
	data->am_P_DownTimeGrinder2->aprc = P_DownTimeGrinder2_arriving;
	data->am_P_DownTimeMeasure->aprc = P_DownTimeMeasure_arriving;
}

