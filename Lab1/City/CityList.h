#pragma once
#include "City.h"

class CityList {
private:
	City* head;
public:
	CityList();
	void refresh();
	void insertCity(int pos);
	void deleteCity(int pos);
	std::string find(std::string name);
	std::string findAll(Point p, double distance);
};