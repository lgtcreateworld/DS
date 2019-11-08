#include "City.h"

City::City() {
	name = "Beijing";
	p = Point();
	next = nullptr;
}
City::City(std::string name, Point p) {
	this->name = name;
	this->p = p;
	next = nullptr;
}
std::string City::getName() { return name; }
Point City::getPoint() { return p; }
void City::setName(std::string name) { this->name = name; }
void City::setPoint(Point p) { this->p = p; }
void City::setNext(City* c) { next = c; }
City* City::getNext() { return next; }