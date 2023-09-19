// Tyuiu.IvanchikovDA.CoursControl_0V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

class Service1 : public ISprint0Task8V0

{
	virtual int Control(int a) override

	{
		int r;
		int t;
		int y;

		r = a / 100;
		t = (a / 10) % 10;
		y = a % 10;

		return r * t * y;
	}

};
