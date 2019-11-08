#include "Point.h"
#include <sstream>
Point::Point() {
	x = 0.0;
	y = 0.0;
}
Point::Point(double x, double y) {
	this->x = x;
	this->y = y;
}
double Point::getX() { return x; }
double Point::getY() { return y; }
std::string Point::toString() {
	std::string s;
	s = "(" + std::to_string(this->getX()) + ", " + std::to_string(this->getY()) + ")";
	return s;
}