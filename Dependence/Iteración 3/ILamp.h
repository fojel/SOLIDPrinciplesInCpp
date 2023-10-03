#include <iostream>
#define interface struct
using namespace std;

interface ILamp
{
	virtual void on() = 0;
	virtual void off() = 0;	
};