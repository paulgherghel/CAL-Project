/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"

#include "mcal_init.h"

#include "hal_motor.h"

T_U8 duty=10;

void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);	
 	vMotorInit();
	vSetMotorDir(INAINTE);
}

void TASK_1ms()
{

}

void TASK_5ms()
{

}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
	vSetMotorSpeed(duty+10);
	duty=duty+5;
}

void TASK_500ms()
{ 	

}

void TASK_1000ms()
{

}