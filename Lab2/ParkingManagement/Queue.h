#pragma once
#include <iostream>
#include "Car.h"
class Node {
public:
	Car car;
	Node* next;
};
class Queue {
private:
	Node *front;
	Node *rear;
public:
	Queue();
	~Queue();
	bool empty();
	void enQueue(Car c);
	void deQueue();
	Car getFrontCar();
	void showQueue();
	int getSize();
};