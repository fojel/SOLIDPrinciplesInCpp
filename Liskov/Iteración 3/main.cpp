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
	ILamp* LR = createLampRegulable();
		
	LR->on();
	LR->off();
	LR->increment();
	LR->decrement();
	LR->increment();
	LR->decrement();
		
	delete LR;
		
	return 0;
}
