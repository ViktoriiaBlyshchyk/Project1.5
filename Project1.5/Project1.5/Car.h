#pragma once
#include <string>

using namespace std;

class Car
{
private:
    string tradeMark;
    unsigned int enginePower;
    unsigned int numberOfCylinders;

public:
    string GetTradeMark() const { return tradeMark; };
    unsigned int GetEnginePower()  const { return enginePower; };
    unsigned int GetNumberOfCylinders() { return numberOfCylinders; };

    void SetTradeMark(string tradeMark) { this->tradeMark = tradeMark; };
    void SetEnginePower(unsigned int enginePower) { this->enginePower = enginePower; }
    void SetNumberOfCylinders(unsigned int numberOfCylinders) { this->numberOfCylinders = numberOfCylinders; }

    void Init(string tradeMark, unsigned int enginePower, unsigned int numberOfCylinders);
    void Display() const;
    void Read();

    double Change1();
};

