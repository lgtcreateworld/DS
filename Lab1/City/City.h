#pragma once
#include <string>
#include <iostream>
#include <math.h>
#include "Point.h"

class City {
private:
	std::string name;
	Point p;
	City* next;
public:
	City();
	City(std::string nane, Point p);
	std::string getName();
	Point getPoint();
	void setName(std::string name);
	void setPoint(Point p);
	void setNext(City* c);
	City* getNext();
};
