#include "PersonList.h"

int main(void) {
	std::cout << "�������ʼ��������ֵ��";
	int m;
	std::cin >> m;
	std::cout << "��������������С�ڵ���30����";
	int num;
	std::cin >> num;
	int* p = new int[num];
	for (int i = 0; i < num; i++) {
		std::cout << "�������" << (i + 1) << "���˵����룺";
		int x;
		std::cin >> x;
		p[i] = x;
	}
	PersonList list(p, num);
	list.Joeph(m);
	delete[] p;
	return 0;
}