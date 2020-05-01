/*
 * premptive_scheduler.h
 *
 *  Created on: Apr 26, 2020
 *      Author: sudeep_subi
 */

#ifndef INC_PREMPTIVE_SCHEDULER_H_
#define INC_PREMPTIVE_SCHEDULER_H_

#include "main.h"


__attribute__((naked))void LaunchScheduler(void);
void OsInitThreadStack();
volatile void Task0();
volatile void Task1();


#endif /* INC_PREMPTIVE_SCHEDULER_H_ */
