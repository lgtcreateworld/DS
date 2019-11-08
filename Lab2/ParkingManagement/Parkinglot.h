#pragma once
#include <iostream>
#include "Car.h"
#include "Stack.h"

class Parkinglot {
public:
	Stack<Car>* pStack;
	Parkinglot();
	~Parkinglot();
	bool isEmpty();
	void showArrived(Car c);
	void showLeaved(Car c);
};