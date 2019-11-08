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
		type = "小汽车";
	else if (carSize == 1.5)
		type = "客车";
	else if (carSize == 3)
		type = "十轮卡车";
	return type;
}
std::string Car::toString() {
	std::string flagString(1, flag);
	return ("车的状态为：" + flagString + "车的序号为：" + std::to_string(number) + "车的到达时间为：" + std::to_string(time));
}