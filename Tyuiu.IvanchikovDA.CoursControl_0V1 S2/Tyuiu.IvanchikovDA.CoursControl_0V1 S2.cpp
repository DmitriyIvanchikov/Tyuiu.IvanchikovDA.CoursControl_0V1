// Tyuiu.IvanchikovDA.CoursControl_0V1 S2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.IvanchikovDA.CoursControl_0V1.Lib/Tyuiu.IvanchikovDA.CoursControl_0V1.Lib.cpp"

using namespace std;
int main()
{
    ISprint0Task8V3* date = new Service1();
    float x;
    float y;
    float z;
    setlocale(LC_ALL, "Rus");
    std::cout << "¬ведите X: \n";
    std::cin >> x;
    std::cout << "¬ведите Y: \n";
    std::cin >> y;
    std::cout << "¬ведите Z: \n";
    std::cin >> z;
    std::cout << "«начение выражени€ = " << date->Proizved(x, y, z);


}
