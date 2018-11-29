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

T_U8 duty=10;
int counter=0;

void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);	
 	vMotorInit();

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
	
}

void TASK_500ms()
{ 	
	
}

void TASK_1000ms()
{
	
	vSetMotorSpeed(50);
	vSetMotorDir(INAINTE);
	counter++;
	vSetAngle(90);

	if(counter == 2)
		vSetAngle(60);
	else if(counter == 4)
		vSetAngle(90);
	else if(counter == 6)
		vSetAngle(120);
	else if(counter == 8)
		counter=0;


}