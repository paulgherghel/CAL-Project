#include "hal_battery.h"


T_F16 getBatteryProcent(){
    T_U16 resolution; 
	T_F16 chargeProcent;
	T_U16 x = ADC_u16Read(0);
	T_F16 inputVoltage;
    inputVoltage = (T_F16)x/4095;
    inputVoltage*=VREF;
	T_F16 batteryVoltage = inputVoltage*4;
    
    if(batteryVoltage >= 7)
    {
        resolution = (100-20)/(8.4-7);
        chargeProcent = 100-((8.4-batteryVoltage)*resolution);
    }else if(batteryVoltage >=(6.5)){
        resolution = (20-10)/(7-6.5);
        chargeProcent = 100-((7-batteryVoltage)*resolution);
    }else if(batteryVoltage >= 6){
        resolution = 10/(6.5-6);
        chargeProcent = 100-((6.5-batteryVoltage)*resolution);
    }
    
    return chargeProcent;
}
