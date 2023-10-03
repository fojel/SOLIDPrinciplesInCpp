#include <iostream>
using namespace std;

class Lamp
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