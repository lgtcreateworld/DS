#include "PersonList.h"

int main(void) {
	std::cout << "请输入初始报数上限值：";
	int m;
	std::cin >> m;
	std::cout << "请输入总人数（小于等于30）：";
	int num;
	std::cin >> num;
	int* p = new int[num];
	for (int i = 0; i < num; i++) {
		std::cout << "请输入第" << (i + 1) << "个人的密码：";
		int x;
		std::cin >> x;
		p[i] = x;
	}
	PersonList list(p, num);
	list.Joeph(m);
	delete[] p;
	return 0;
}