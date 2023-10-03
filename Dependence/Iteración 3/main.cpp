#include <iostream>
#include "Lamp.h"
using namespace std;

ILamp* createLamp()
{
	ILamp* L = new Lamp;
	return L;
}

int main(int argc, char** argv) 
{
	ILamp* L = createLamp();
	
	L->on();
	L->off();
	
	delete L;
	
	return 0;
}