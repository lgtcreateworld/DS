#pragma once
#include <iostream>
constexpr auto MAX_SIZE = 10;
constexpr auto INCRESEMENT = 10;

template <typename T>
class Stack {
private:
	T data;
	T* base;
	int size;
	double pointer;
public:
	Stack();
	~Stack();
	T pop();
	void push(T data);
	bool empty();
	T peek();
	int getSize();
	double getPointer();
	void enPointer(double growth);
	void dePointer(double down);
	void show();
};
template <typename T>
Stack<T>::Stack() {
	base = new T[MAX_SIZE];
	data = T();
	size = 0;
	pointer = 0;
}
template <typename T>
Stack<T>::~Stack() {
	delete base;
	base = NULL;
}
template <typename T>
T Stack<T>::pop() {
	T ret = base[size - 1];
	size--;
	return ret;
}
template <typename T>
void Stack<T>::push(T data) {
	double tmpSize = size++;
	if (tmpSize > MAX_SIZE) {
		T* tmp;
		tmp = new T[MAX_SIZE + INCRESEMENT];
		for (int i = 0; i < size; i++)
			tmp[i] = base[i];
		delete base;
		base = tmp;
		tmp = NULL;
	}
	size--;
	base[size] = data;
	size++;
}
template <typename T>
bool Stack<T>::empty() {
	return (size == 0);
}
template <typename T>
T Stack<T>::peek() {
	return (base[(size)-1]);
}
template <typename T>
int Stack<T>::getSize() {
	return this->size;
}
template <typename T>
double Stack<T>::getPointer() {
	return pointer;
}
template <typename T>
void Stack<T>::dePointer(double down) {
	pointer -= down;
}
template <typename T>
void Stack<T>::enPointer(double growth) {
	pointer += growth;
}
template <typename T>
void Stack<T>::show() {
	for (int i = 0; i < this->size; i++) {
		std::cout << this->base[i] << " ";
	}
}