#include "Person.h"
Person::Person() {
	id = 0;
	password = 6;
	next = nullptr;
}
int Person::getId() { return id; }
int Person::getPassword() { return password; }
Person* Person::getNext() { return next; }
void Person::setPassword(int password) { this->password = password; }
void Person::setNext(Person* p) { next = p; }
void Person::setId(int id) { this->id = id; }