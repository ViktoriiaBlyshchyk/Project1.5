#include "Car.h"
#include <iostream>

using namespace std;

void Car::Init(string tradeMark, unsigned int enginePower, unsigned int numberOfCylinders)
{
	SetTradeMark(tradeMark);
	SetEnginePower(enginePower);
	SetNumberOfCylinders(numberOfCylinders);
}

void Car::Display() const
{
	cout << endl;
	cout << "tradeMark = " << tradeMark << endl;
	cout << "enginePower = " << enginePower << endl;
	cout << "numberOfCylinders = " << numberOfCylinders << endl;
}

void Car::Read()
{
	string tradeMark;
	unsigned int enginePower;
	unsigned int numberOfCylinders;
	cout << endl;
	cout << "tradeMark = "; cin >> tradeMark;
	cout << "enginePower = "; cin >> enginePower;
	cout << "numberOfCylinders = "; cin >> numberOfCylinders;
	Init(tradeMark, enginePower, numberOfCylinders);
}

double Car::Change1()
{
	int x;
	cout << "enginePower = "; cin >> x;
	enginePower = x;
	return x;
}