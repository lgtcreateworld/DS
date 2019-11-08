#pragma once
#include <iostream>
#include <string>
#include <sstream>

class Car {
private:
	char flag;
	int time;
	int number;
	double carSize;
public:
	Car();
	Car(char flag, int time, int number, double carSize);
	char getFlag();
	int getTime();
	void setTime(int time);
	int getNumber();
	double getCarSize();
	std::string getCarType();
	std::string toString();
};

