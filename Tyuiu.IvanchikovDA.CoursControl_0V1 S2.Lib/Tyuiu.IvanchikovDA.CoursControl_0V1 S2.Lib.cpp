// Tyuiu.IvanchikovDA.CoursControl_0V1 S2.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

class Service1 : public ISprint0Task8V3
{
	virtual float Proizved(float a, float b, float c) override
	{
		float Rez;
		Rez = 5 + ((2 * a - c) / (3 + b * b));
		return Rez;
	};
};