#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"
float T;
float Pa;
float RSdivRL;
uint8_t hour ;
uint8_t minute ;
uint8_t second ;
Model::Model() : modelListener(0),Pressure_Val(),Temperature_Val(),CO_Val(),Hour(),Minute(),Second(),tickCounter(0)
{

}

void Model::tick()
{
//	tickCounter++;
//
//		if (tickCounter % 60 == 0)
//	    {
////	        if (++Second >= 60)
////		    {
////	        	Second = 0;
////		        if (++Minute >= 60)
////		        {
////		           	Minute = 0;
////		            if (++Hour >= 24)
////		            {
////		               	Hour = 0;
////		            }
////		        }
////		    }
////	        Pressure_Val++;
//////	    Temperature_Val++;
////	       	CO_Val++;
////			Temperature_Val=LM75_TemperatureRead();
////			CO_Val = getGasConcentration();
////
////			Second = DS1307_GetSecond();
////			Minute = DS1307_GetMinute();
////			Hour   = DS1307_GetHour();
//////			Pressure_Val = BMP280_Measure();
//
//	    }

	modelListener->setPressure(Pa);
	modelListener->setTemperature(T);
	modelListener->setCO(RSdivRL);
	modelListener->updateTime(hour,minute,second);
}
