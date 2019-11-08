#include <iostream>
#include "Point.h"
#include "City.h"
#include "CityList.h"

int main(void) {
	std::cout << "���ڳ�ʼ������" << std::endl;
	CityList myList;
	std::cout << "��ʼ����ϣ�" << std::endl;
	std::cout << "������'Y'��'y'��ʾ��ʼ";
	char character;
	std::cin >> character;
	while (character == 'Y' || character == 'y') {
		std::cout << "����������ѡ���ѡ�" << std::endl;
		std::cout << "1.����  2.ɾ��  3.��ʾ���еĳ���\n"
			<< "4.�鿴�б���һ�����е����� " << " 5.Ѱ��ָ����Χ�ڵ����г���" << std::endl;
		int x;
		std::cin >> x;
		if (1 == x) {
			std::cout << "������Ҫ��ӵ���λ�ã�";
			int pos;
			std::cin >> pos;
			myList.insertCity(pos);
		}
		else if (2 == x) {
			std::cout << "������Ҫɾ����λ�ã�";
			int pos;
			std::cin >> pos;
			myList.deleteCity(pos);
		}
		else if (3 == x) {
			myList.refresh();
		}
		else if (4 == x) {
			std::cout << "�������������";
			std::string newName;
			std::cin >> newName;
			std::cout << myList.find(newName) << std::endl;;
		}
		else if (5 == x) {
			double x, y, distance;
			std::cout << "����������x���꣺";
			std::cin >> x;
			std::cout << "����������y���꣺";
			std::cin >> y;
			Point point(x, y);
			std::cout << "��������룺";
			std::cin >> distance;
			std::cout << myList.findAll(point, distance) << std::endl;
		}
		else
			std::cout << "ѡ����Ч" << std::endl;
		std::cout << "������'Y'��'y'��ʾ������";
		char character;
		std::cin >> character;
		if (character != 'y' && character != 'Y')
			break;
		else
			continue;
	}
	return 0;
}