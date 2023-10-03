#include <iostream>
using namespace std;

void encender_Lamp();
void apagar_Lamp();

int main(int argc, char** argv) 
{
	encender_Lamp();
	apagar_Lamp();
	
	return 0;
}

void encender_Lamp()
{
	cout<<"La lampara se encendio"<<endl;
}

void apagar_Lamp()
{
	cout<<"La lampara se apago";
}
