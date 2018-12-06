#include "general.h"
#include "mcal_timers.h"
#include "sys_schedule.h"
#include "hal_linefollower.h"
#include "hal_motor.h"
#include "hal_servomotor.h"

int main()
{
	TASK_Inits();
	//TASK_vSchedule();
    while(1)
    {
		vSetMotorSpeed(50);
		vSetMotorDir(INAINTE);
		if(LF_u8ReadPins()==0x3F)
			vSetAngle(90);
		else if(LF_u8ReadPins() == 0x00)
			vSetAngle(120);
	
				
    }

    return 0;
}