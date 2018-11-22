#include "general.h"
#include "hal_motor.h" 
#include "mcal_timers.h"
#include "sys_schedule.h"


int main()
{
	TASK_Inits();
	TASK_vSchedule();

    while(1)
    {
        
    }
    return 0;
}