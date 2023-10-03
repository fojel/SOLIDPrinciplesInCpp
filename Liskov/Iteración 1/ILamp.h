#pragma once
#include<iostream>
#define interface struct

interface ILamp
{
	virtual void on() = 0;
	virtual void off() = 0;	
};


