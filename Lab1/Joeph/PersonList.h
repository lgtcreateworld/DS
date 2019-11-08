#pragma once
#include "Person.h"
class PersonList {
private:
	Person* head;
public:
	PersonList();
	PersonList(int a[], int n);
	void Joeph(int n);
	void show(int n);
};