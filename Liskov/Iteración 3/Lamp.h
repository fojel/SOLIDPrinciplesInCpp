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
            }

            void off()
            {
            }

            void burned()
            {
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
