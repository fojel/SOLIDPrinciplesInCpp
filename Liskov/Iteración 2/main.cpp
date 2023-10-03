#include <iostream>
#include "LampStateON.h"
#include "LampStateOFF.h"
#include "LampRegulable.h"
#include "Lamp.h"

ILamp* createLampRegulable()
{
	ILamp* lamp = new LampRegulable;
	return lamp;
}

int main(int argc, char** argv) 
{
	ILamp* L = createLampRegulable();
	
	L->increment();
	L->decrement();
	
	delete L;
		
	return 0;
}
