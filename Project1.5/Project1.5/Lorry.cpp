#include "Lorry.h"
#include <iostream>

using namespace std;

void Lorry::Init(unsigned int carryingAbility, Car car)
{
	SetCarryingAbility(carryingAbility);
	SetCar(car);
}

void Lorry::Display() const
{
	cout << endl;
	cout << "Car: " << endl;
	car.Display();
	cout << "carryingAbility = " << carryingAbility << endl;
}

void Lorry::Read()
{
	unsigned int carryingAbility;
	Car c;
	Lorry l;
	cout << "Car: " << endl;
	c.Read();
	cout << "carryingAbility = "; cin >> carryingAbility;
	cout << endl;
	c.Change1();
	carryingAbility = Change2();
	Init(carryingAbility, c);
}

double Lorry::Change2()
{
	int y;
	cout << "carryingAbility = "; cin >> y;
	return y;
}