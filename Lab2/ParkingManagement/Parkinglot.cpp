#include "Parkinglot.h"

Parkinglot::Parkinglot() {
	Stack<Car>* pStack = new Stack<Car>;
	this->pStack = pStack;
	pStack = NULL;
}
Parkinglot::~Parkinglot() {
	delete pStack;
	pStack = NULL;
}
bool Parkinglot::isEmpty() {
	return (pStack->empty());
}
void Parkinglot::showArrived(Car c) {
	std::cout << "����ͣ�����е�λ��Ϊ��" << pStack->getPointer() << std::endl;
	pStack->push(c);
	pStack->enPointer(c.getCarSize());
}
void Parkinglot::showLeaved(Car c) {
	Stack<Car> tmpStack;
	while (pStack->peek().getNumber() != c.getNumber()) {
		Car tmpCar = pStack->pop();
		pStack->dePointer(tmpCar.getCarSize());
		tmpStack.push(tmpCar);
	}
	Car leavedCar = pStack->pop();
	pStack->dePointer(leavedCar.getCarSize());
	int lastTime = (c.getTime() - leavedCar.getTime());
	std::cout << "�˳���ͣ����ͣ��ʱ��Ϊ��" << lastTime
		<< "������������" << c.getCarType()
		<< "��Ӧ���ɵĽ��Ϊ��" << (lastTime * c.getCarSize() * 10) << std::endl;
	while (!tmpStack.empty()) {
		pStack->push(tmpStack.peek());
		pStack->enPointer(tmpStack.peek().getCarSize());
		tmpStack.pop();
	}
}