#include<iostream>
#include "LampState.h"

class LampStateOFF: public LampState
{
      public:
            LampStateOFF()
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
             
			virtual void burned()
            {
            	
			}

            virtual ~LampStateOFF()
            {
            	std::cout<<"Instancia eliminada"<<std::endl;
            }
             
      private:
            int status = 0;
            int stON = 1;
            int stOFF = 0;
};
