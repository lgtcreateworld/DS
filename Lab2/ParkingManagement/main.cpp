#include "Car.h"
#include "Queue.h"
#include "Parkinglot.h"
#include <iostream>

int main() {
	Parkinglot p;
	Queue q;
	char flag;
	int number, time;
	double size;
	std::cin >> flag >> number >> time >> size;
	while (flag != 'E') {
		Car c(flag, number, time, size);
		if (flag == 'A') {
			if (p.pStack->getPointer() + size <= MAX_SIZE)
				p.showArrived(c);
			else
				q.enQueue(c);
		}
		else if (flag == 'D') {
			p.showLeaved(c);
			if (!q.empty()) {
				if (q.getFrontCar().getCarSize() + p.pStack->getPointer() <= MAX_SIZE) {
					Car tmpCar = q.getFrontCar();
					tmpCar.setTime(c.getTime());
					p.showArrived(tmpCar);
				}
			}
		}
		std::cin >> flag >> number >> time >> size;
	}
	return 0;
}