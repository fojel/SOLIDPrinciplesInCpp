#include<iostream>

class Lamp
{
      public:
            Lamp()
            {
              std::cout<<"Instancia creada"<<std::endl;
            }
             
            void on()
            {
            	if(status != stON)
            	{
                	//image = getImageON();
                	status = stON;
                	
                	std::cout<<"La lampara esta encendida"<<std::endl;
            	}
				else
				{
                	// no es necesario apagarla si ya está encendida
            	}    
            }

            void off()
            {
               if(status != stOFF)
               {
                	//image = getImageOFF();
                	status = stOFF;
                	
                	std::cout<<"La lampara esta apagada"<<std::endl;
               }
			   else
			   {	
                	// no es necesario encenderla si ya está apagada
               }    
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
