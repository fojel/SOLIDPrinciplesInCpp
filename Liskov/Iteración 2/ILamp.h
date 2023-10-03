#pragma once
#include<iostream>
#define interface struct

interface ILamp
{
	virtual void on() = 0;
	virtual void off() = 0;	
	virtual void increment() = 0;
	virtual void decrement() = 0;
};


