#include <iostream>
#include "LampStateON.h"
#include "LampStateOFF.h"
#include "Lamp.h"

ILamp* createLamp()
{
	ILamp* lamp = new Lamp;
	return lamp;
}

int main(int argc, char** argv) 
{  
	ILamp* L = createLamp();
	L->on();
	L->off();
  
	delete L;
	
	return 0;
}
