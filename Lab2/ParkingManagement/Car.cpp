#include "Car.h"

Car::Car() {
	flag = 'A';
	time = 0;
	number = 1;
	carSize = 1;
}
Car::Car(char flag, int number, int time, double carSize) {
	this->flag = flag;
	this->number = number;
	this->time = time;
	this->carSize = carSize;
}
char Car::getFlag() { return flag; }
int Car::getTime() { return time; }
void Car::setTime(int time) {
	this->time = time;
}
int Car::getNumber() { return number; }
double Car::getCarSize() { return carSize; }
std::string Car::getCarType() {
	std::string type;
	if (carSize == 1)
		type = "С����";
	else if (carSize == 1.5)
		type = "�ͳ�";
	else if (carSize == 3)
		type = "ʮ�ֿ���";
	return type;
}
std::string Car::toString() {
	std::string flagString(1, flag);
	return ("����״̬Ϊ��" + flagString + "�������Ϊ��" + std::to_string(number) + "���ĵ���ʱ��Ϊ��" + std::to_string(time));
}