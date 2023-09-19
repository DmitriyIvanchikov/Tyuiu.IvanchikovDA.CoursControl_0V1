// Tyuiu.IvanchikovDA.CoursControl_0V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.IvanchikovDA.CoursControl_0V1.Lib/Tyuiu.IvanchikovDA.CoursControl_0V1.Lib.cpp"

using namespace std;


int main()
{
	int a;
	ISprint0Task8V0* date = new Service1();
	setlocale(LC_ALL, "Rus");
	std::cout << "Введите трехзначное число: \n";
	cin >> a;
	std::cout << "Произведение цифр данного трехзначчного числа = " << date->Control(a);
	std::cout << std::endl;
}