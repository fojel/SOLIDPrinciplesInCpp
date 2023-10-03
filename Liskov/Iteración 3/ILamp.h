#pragma once
#include<iostream>
#define interface struct
#define extend public

interface ILamp
{
	virtual void on() = 0;
	virtual void off() = 0;	
};

interface ILampRegulable: extend ILamp
{
	virtual void increment() = 0;
	virtual void decrement() = 0;
};
