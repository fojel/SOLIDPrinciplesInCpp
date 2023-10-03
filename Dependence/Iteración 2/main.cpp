#include <iostream>
#include "Lamp.h"
using namespace std;

int main(int argc, char** argv) 
{
	Lamp* L = new Lamp;
	
	L->on();
	L->off();
	
	delete L;
	
	return 0;
}