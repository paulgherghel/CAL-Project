/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"
#include "general_types.h"
#include "mcal_init.h"
#include "hal_servomotor.h"
#include "hal_motor.h"
#include "hal_battery.h"

T_F16 batteryProcent;


void TASK_Inits()
{
    MCAL_vInit();
    

}

void TASK_1ms()
{
    batteryProcent = getBatteryProcent();
}

void TASK_5ms()
{

}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
	
}

void TASK_500ms()
{ 	
	
}

void TASK_1000ms()
{


}