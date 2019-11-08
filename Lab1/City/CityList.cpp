#include "CityList.h"
CityList::CityList() {
	head = new City;
	if (nullptr == head)
		std::cout << "new error!" << std::endl;
}
void CityList::refresh() {
	City* pCity = head;
	int cnt = 1;
	while (pCity != nullptr) {
		if (cnt == 1) {
			std::cout << "�б��еĳ����У�" << std::endl;
			std::cout << cnt << ": " << pCity->getName() << " " << "�������е������ǣ�" << pCity->getPoint().toString() << "." << std::endl;
			pCity = pCity->getNext();
		}
		else {
			std::cout << cnt << ": " << pCity->getName() << " " << "�������е������ǣ�" << pCity->getPoint().toString() << "." << std::endl;
			pCity = pCity->getNext();
		}
		cnt++;
	}
}
void CityList::insertCity(int pos) {
	City* pCity = head;
	std::string name;
	double x, y;
	std::cout << "��������е����ƣ�";
	std::cin >> name;
	std::cout << "��������е�x���꣺";
	std::cin >> x;
	std::cout << "��������е�y���꣺";
	std::cin >> y;
	Point p(x, y);
	int i = 0;
	while (pCity->getNext() != nullptr && i < pos - 1) {
		pCity = pCity->getNext();
		i++;
	}
	City* tmp = new City(name, p);
	tmp->setNext(pCity->getNext());
	pCity->setNext(tmp);
}
void CityList::deleteCity(int pos) {
	City* pCity = head;
	int i = 1;
	while (i < pos - 1) {
		pCity = pCity->getNext();
		i++;
	}
	City* tmp = pCity->getNext();
	pCity->setNext(tmp->getNext());
	delete(tmp);
	tmp = nullptr;
}
std::string CityList::find(std::string name) {
	City* pCity = head;
	while (pCity->getName() != name) {
		pCity = pCity->getNext();
		if (pCity == nullptr)
			return "�б��в�������������";
	}
	return (pCity->getPoint().toString());
}
std::string CityList::findAll(Point p, double distance) {
	City* pCity = head;
	std::string cities = "";
	while (pCity != nullptr) {
		double z = pow(pow(pCity->getPoint().getX() - p.getX(), 2) + pow((pCity->getPoint().getY() - p.getY()), 2), 1.0 / 2.0);
		if (z <= distance)
			cities += pCity->getName() + ", ";
		pCity = pCity->getNext();
	}
	return cities;
}