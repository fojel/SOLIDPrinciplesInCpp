#include<iostream>
#include "LampState.h"

class LampBurned: public LampState
{
      public:
            LampBurned()
            {
              	std::cout<<"Instancia creada"<<std::endl;
            }
 
            virtual void on()
            {            	
			
			}

            virtual void off()
            {            	
			
			}
			
            virtual void burned()
            {            	
            	std::cout<<"La lampara esta quemada"<<std::endl;
			}
             
            virtual ~LampBurned()
            {
            	std::cout<<"Instancia eliminada"<<std::endl;
            }
             
      private:
};
