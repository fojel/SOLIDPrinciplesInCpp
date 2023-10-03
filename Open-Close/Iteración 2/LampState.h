#pragma once
#include<iostream>
#include "ILamp.h"
#define implement public

class LampState: implement 	ILamp
{
      public:
            LampState()
            {
              	std::cout<<"Instancia creada"<<std::endl;
            }
             
            virtual void on()
            {
            }

            virtual void off()
            {
            }
             
            virtual ~LampState()
            {
            	std::cout<<"Instancia eliminada"<<std::endl;
            }
             
      private:
            int status = 0;
            int stON = 1;
            int stOFF = 0;
};
