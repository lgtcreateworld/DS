#include "Queue.h"

Queue::Queue() {
	Node* p = new Node;
	p->next = NULL;
	front = p;
	rear = p;
}
Queue::~Queue() {
	while (front) {
		rear = front->next;
		delete front;
		front = rear;
	}
}
void Queue::enQueue(Car c) {
	Node* pNew = new Node;
	pNew->car = c;
	rear->next = pNew;
	rear = pNew;
}
void Queue::deQueue() {
	Node* p = front->next;
	front->next = front->next->next;
	if (rear == p)
		rear = front;
	delete p;
}
Car Queue::getFrontCar() {
	return front->car;
}
bool Queue::empty() {
	return (front == rear);
}
void Queue::showQueue() {
	Node* p = front->next;
	if (p == NULL)
		std::cout << "╤сапн╙©у" << std::endl;
	while (p != NULL) {
		std::cout << p->car.toString();
		p = p->next;
	}
	std::cout << std::endl;
}
int Queue::getSize() {
	int length = 0;
	Node* p1 = front;
	while (p1 != rear) {
		p1 = p1->next;
		length++;
	}
	p1 = NULL;
	return length;
}