#include<iostream>
#include "ILamp.h"
#define implement public

class LampRegulable: implement ILampRegulable
{
      public:
            LampRegulable()
            {
              	std::cout<<"Instancia creada"<<std::endl;
            }
             
            virtual void on()
            {
            	status = stON;
            	
            	std::cout<<"La lampara esta encendida"<<std::endl;
            }
			
            virtual void off()
            {
            	status = stOFF;
            	
            	std::cout<<"La lampara esta apagada"<<std::endl;
            }

			virtual void increment()
			{
				std::cout<<"La lampara se encendio un poco"<<std::endl;
			}

			virtual void decrement()
			{
				std::cout<<"La lampara se apago un poco"<<std::endl;
			}
             
            virtual ~LampRegulable()
            {
            	std::cout<<"Instancia eliminada"<<std::endl;
            }
             
      private:
            int status = 0;
            int stON = 1;
            int stOFF = 0;
};
