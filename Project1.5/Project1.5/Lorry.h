#pragma once
#include <string>
#include "Car.h"

using namespace std;

class Lorry
{
private:
	unsigned int carryingAbility;
	Car car;

public:
	unsigned int GetCarryingAbility() const { return carryingAbility; };
	Car GetCar() const { return car; }
	void SetCarryingAbility(unsigned int carryingAbility) { this->carryingAbility = carryingAbility; }
	void SetCar(Car car) { this->car = car; }

	void Init(unsigned int carryingAbility, Car car);
	void Display() const;
	void Read();

	double Change2();
};
