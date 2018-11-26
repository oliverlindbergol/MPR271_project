// polisher.c
// AutoMod 12.6.1 Generated File
// Build: 12.6.1.19
// Model name:	tom_upperlane
// Model path:	C:\Users\tomgy\SimOfProd\Project\MPR271_project\tom_upperlane.dir\
// Generated:	Mon Nov 26 16:29:46 2018
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
P_Loading_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", localactor);
	AMDebuggerParams("tom_upperlane.P_Loading", P_Loading_arriving, localactor, 0, NULL, NULL, NULL);
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
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 2);
			while (1 == 1) {
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 3);
					pushppa(this, P_Loading_arriving, Step 2, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_Fixture);
					return Continue; // go move into territory
Label2: ; // Step 2
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 4);
					if (QueGetCurConts(am2_Q_LoadingProduct) == 1) {
						AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 5);
						order(1, am2_OL_FixtureAvailable, NULL, NULL);		// Place an order
					}
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 6);
					return waitorder(am2_OL_FixtureLoad, this, P_Loading_arriving, Step 3, am_localargs);
Label3: ; // Step 3
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 7);
					pushppa(this, P_Loading_arriving, Step 4, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_LoadingFixture);
					return Continue; // go move into territory
Label4: ; // Step 4
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 8);
					if (waitfor(ToModelTime(am2_VI_LoadingTime, UNITSECONDS), this, P_Loading_arriving, Step 5, am_localargs) == Delayed)
						return Delayed;
Label5: ; // Step 5
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 9);
					pushppa(this, P_Loading_arriving, Step 6, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_FixtureInPolisher);
					return Continue; // go move into territory
Label6: ; // Step 6
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 10);
					return waitorder(am2_OL_FixtureUnload, this, P_Loading_arriving, Step 7, am_localargs);
Label7: ; // Step 7
					if (!this->inLeaveProc && this->nextproc) {
						retval = Continue;
						goto LabelRet;
					}
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 11);
					pushppa(this, P_Loading_arriving, Step 8, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_FixtureUnloading);
					return Continue; // go move into territory
Label8: ; // Step 8
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 12);
					if (waitfor(ToModelTime(am2_VI_LoadingTime, UNITSECONDS), this, P_Loading_arriving, Step 9, am_localargs) == Delayed)
						return Delayed;
Label9: ; // Step 9
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 13);
					pushppa(this, P_Loading_arriving, Step 10, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_Conveyor);
					return Continue; // go move into territory
Label10: ; // Step 10
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor, 14);
					if (waitfor(ToModelTime(am2_VI_FixtureTravelTime, UNITMINUTES), this, P_Loading_arriving, Step 11, am_localargs) == Delayed)
						return Delayed;
Label11: ; // Step 11
				}
			}
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("polisher.m", "Arriving procedure", "tom_upperlane.P_Loading", P_Loading_arriving, localactor);
	return retval;
} /* end of P_Loading_arriving */

static int32
P_Polisher_arriving(load* this, int32 step, void* args)
{
	void* am_localargs = NULL;
	load* localactor = this;
	int32 retval = Continue;
	AMDebuggerBeginRoutine("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", localactor);
	AMDebuggerParams("tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 0, NULL, NULL, NULL);
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
	case Step 13: goto Label13;
	default: message("Bad step number %ld.", step);
	}
	retval = Error;
	goto LabelRet;
Label1: ;  /* Step1 */
	{
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 19);
			if (LdGetType(this) == am2_L_Product40) {
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 21);
					pushppa(this, P_Polisher_arriving, Step 2, am_localargs);
					pushppa(this, inqueue, Step 1, am2_Q_Buffer40);
					return Continue; // go move into territory
Label2: ; // Step 2
				}
				{
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 22);
					this->attribute->am2_AI_PolisherIndex = 1;
					EntityChanged(0x00000040);
				}
			}
			else {
				AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 24);
				if (LdGetType(this) == am2_L_Product46) {
					{
						AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 26);
						pushppa(this, P_Polisher_arriving, Step 3, am_localargs);
						pushppa(this, inqueue, Step 1, am2_Q_Buffer46);
						return Continue; // go move into territory
Label3: ; // Step 3
					}
					{
						AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 29);
						if (QueGetRemCap(ValidPtr(&(am2_Q_Polisher[2]), 50, queue*)) > 0) {
							AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 30);
							this->attribute->am2_AI_PolisherIndex = 2;
							EntityChanged(0x00000040);
						}
						else {
							AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 31);
							if (QueGetRemCap(ValidPtr(&(am2_Q_Polisher[1]), 50, queue*)) == 0 && QueGetRemCap(ValidPtr(&(am2_Q_Polisher[2]), 50, queue*)) == 0 && QueGetRemCap(ValidPtr(&(am2_Q_Polisher[3]), 50, queue*)) == 0) {
								AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 32);
								this->attribute->am2_AI_PolisherIndex = 2;
								EntityChanged(0x00000040);
							}
							else {
								{
									queue* am_locVar;
									AMQueueList* am_locList = NULL;

									AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 35);
									ListAppendItem(QueueList, am_locList, &(am2_Q_Polisher[1]));
									ListAppendItem(QueueList, am_locList, &(am2_Q_Polisher[3]));
									if (Size(List, _List, am_locList)) {
										int32 am_locVal;
										AMQueueListItem* locIter;
										int i = 0;
										int first = getirand(am2_stream0) % am_locList->numItems;

										for (locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
										}
										am_locVar = locIter->item;
										am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
										this->attribute->am2_A_QptrPolisher = am_locVar;
										EntityChanged(0x00000040);
										for (locIter = locIter->next; locIter; locIter = locIter->next) {
											am_locVar = locIter->item;
											if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
												this->attribute->am2_A_QptrPolisher = am_locVar;
												EntityChanged(0x00000040);
												am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
											}
										}
										for (i = 0, locIter = am_locList->first; i < first; ++i, locIter = locIter->next) {
											am_locVar = locIter->item;
											if (QueGetCurConts(ValidPtr(am_locVar, 50, queue*)) < am_locVal) {
												this->attribute->am2_A_QptrPolisher = am_locVar;
												EntityChanged(0x00000040);
												am_locVal = QueGetCurConts(ValidPtr(am_locVar, 50, queue*));
											}
										}
										ListRemoveAllAndFree(QueueList, am_locList);
									} else
										this->attribute->am2_A_QptrPolisher = NULL;
										EntityChanged(0x00000040);
								}
								{
									AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 38);
									this->attribute->am2_AI_PolisherIndex = QueGetIndex(ValidPtr(this->attribute->am2_A_QptrPolisher, 50, queue*));
									EntityChanged(0x00000040);
								}
							}
						}
					}
				}
				else {
					AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 41);
					if (LdGetType(this) == am2_L_Product49) {
						{
							AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 43);
							pushppa(this, P_Polisher_arriving, Step 4, am_localargs);
							pushppa(this, inqueue, Step 1, am2_Q_Buffer49);
							return Continue; // go move into territory
Label4: ; // Step 4
						}
						{
							AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 44);
							this->attribute->am2_AI_PolisherIndex = 3;
							EntityChanged(0x00000040);
						}
					}
				}
			}
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 48);
			if (QueGetRemCap(am2_Q_LoadingProduct) < 1) {
				AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 49);
				return waitorder(am2_OL_ProductLoad, this, P_Polisher_arriving, Step 5, am_localargs);
Label5: ; // Step 5
				if (!this->inLeaveProc && this->nextproc) {
					retval = Continue;
					goto LabelRet;
				}
			}
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 51);
			pushppa(this, P_Polisher_arriving, Step 6, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_LoadingProduct);
			return Continue; // go move into territory
Label6: ; // Step 6
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 53);
			if (QueGetCurConts(am2_Q_Fixture) == 0) {
				AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 54);
				return waitorder(am2_OL_FixtureAvailable, this, P_Polisher_arriving, Step 7, am_localargs);
Label7: ; // Step 7
				if (!this->inLeaveProc && this->nextproc) {
					retval = Continue;
					goto LabelRet;
				}
			}
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 56);
			order(1, am2_OL_FixtureLoad, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 57);
			if (waitfor(ToModelTime(am2_VI_LoadingTime, UNITSECONDS), this, P_Polisher_arriving, Step 8, am_localargs) == Delayed)
				return Delayed;
Label8: ; // Step 8
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 58);
			pushppa(this, P_Polisher_arriving, Step 9, am_localargs);
			pushppa(this, inqueue, Step 1, &(am2_Q_Polisher[ValidIndex("am_model.am_Q_Polisher", this->attribute->am2_AI_PolisherIndex, 3)]));
			return Continue; // go move into territory
Label9: ; // Step 9
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 60);
			order(1, am2_OL_ProductLoad, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 62);
			return usefor(&(am2_R_Polisher[ValidIndex("am_model.am_R_Polisher", this->attribute->am2_AI_PolisherIndex, 3)]), 1, this, P_Polisher_arriving, Step 10, am_localargs, ToModelTime(am2_VI_CycleTimePolisher[ValidIndex("am_model.am_VI_CycleTimePolisher", this->attribute->am2_AI_PolisherIndex, 3)], UNITSECONDS));
Label10: ; // Step 10
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 63);
			order(1, am2_OL_FixtureUnload, NULL, NULL);		// Place an order
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 64);
			pushppa(this, P_Polisher_arriving, Step 11, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Unloading);
			return Continue; // go move into territory
Label11: ; // Step 11
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 65);
			if (waitfor(ToModelTime(am2_VI_LoadingTime, UNITSECONDS), this, P_Polisher_arriving, Step 12, am_localargs) == Delayed)
				return Delayed;
Label12: ; // Step 12
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 67);
			pushppa(this, P_Polisher_arriving, Step 13, am_localargs);
			pushppa(this, inqueue, Step 1, am2_Q_Buffer3);
			return Continue; // go move into territory
Label13: ; // Step 13
		}
		{
			AMDebugger("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor, 68);
			this->nextproc = am2_P_SurfaceTreatment; /* send to ... */
			EntityChanged(W_LOAD);
			retval = Continue;
			goto LabelRet;
		}
	}
LabelRet: ;
	if (am_localargs)
		xfree(am_localargs);
	AMDebuggerEndRoutine("polisher.m", "Arriving procedure", "tom_upperlane.P_Polisher", P_Polisher_arriving, localactor);
	return retval;
} /* end of P_Polisher_arriving */



/* init function for polisher.m */
void
model_polisher_init(struct model_struct* data)
{
	data->am_P_Loading->aprc = P_Loading_arriving;
	data->am_P_Polisher->aprc = P_Polisher_arriving;
}

