#include "general.h"
#include "mcal_timers.h"
#include "sys_schedule.h"
#include "hal_servomotor.h"


int main()
{
	TASK_Inits();
	TASK_vSchedule();
    while(1)
    {
		
    }

    return 0;
}