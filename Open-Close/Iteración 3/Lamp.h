#include<iostream>
#include "ILamp.h"
#define implement public

class Lamp: implement ILamp
{
      public:
            Lamp()
            {
              std::cout<<"Instancia creada"<<std::endl;
            }
             
            void on()
            {
            	std::cout<<"La lampara esta encendida"<<std::endl;
            }

            void off()
            {
            	std::cout<<"La lampara esta apagada"<<std::endl;
            }

            void burned()
            {
            	std::cout<<"La lampara esta quemada"<<std::endl;
            }
             
            virtual ~Lamp()
            {
            	std::cout<<"Instancia eliminada"<<std::endl;
            }
             
      private:
            int status = 0;
            int stON = 1;
            int stOFF = 0;
};
