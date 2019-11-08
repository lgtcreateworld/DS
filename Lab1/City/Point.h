#pragma once
#include <iostream>
class Point {
private:
	double x;
	double y;
public:
	Point();
	Point(double x, double y);
	double getX();
	double getY();
	std::string toString();
};