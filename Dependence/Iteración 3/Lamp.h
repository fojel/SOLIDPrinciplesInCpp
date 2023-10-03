#include <iostream>
#include "ILamp.h"
#define implement public
using namespace std;

class Lamp: implement ILamp
{
	public:
		Lamp()
		{
			cout<<"Lampara creada"<<endl;
		}
		
		void on()
		{
			cout<<"Lampara encendida"<<endl;
		}
		
		void off()
		{
			cout<<"Lampara apagada"<<endl;	
		}
		
		~Lamp()
		{
			cout<<"Lampara destruida"<<endl;
		}
	private:
				
};