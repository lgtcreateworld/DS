#pragma once
#include <iostream>
class Person {
private:
	int id;
	int password;
	Person* next;
public:
	Person();
	int getId();
	int getPassword();
	Person* getNext();
	void setPassword(int password);
	void setNext(Person* p);
	void setId(int id);
};