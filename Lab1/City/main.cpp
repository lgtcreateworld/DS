#include <iostream>
#include "Point.h"
#include "City.h"
#include "CityList.h"

int main(void) {
	std::cout << "正在初始化……" << std::endl;
	CityList myList;
	std::cout << "初始化完毕！" << std::endl;
	std::cout << "请输入'Y'或'y'表示开始";
	char character;
	std::cin >> character;
	while (character == 'Y' || character == 'y') {
		std::cout << "请输入你想选择的选项：" << std::endl;
		std::cout << "1.插入  2.删除  3.显示已有的城市\n"
			<< "4.查看列表中一座城市的坐标 " << " 5.寻找指定范围内的所有城市" << std::endl;
		int x;
		std::cin >> x;
		if (1 == x) {
			std::cout << "请输入要填加到的位置：";
			int pos;
			std::cin >> pos;
			myList.insertCity(pos);
		}
		else if (2 == x) {
			std::cout << "请输入要删除的位置：";
			int pos;
			std::cin >> pos;
			myList.deleteCity(pos);
		}
		else if (3 == x) {
			myList.refresh();
		}
		else if (4 == x) {
			std::cout << "请输入城市名：";
			std::string newName;
			std::cin >> newName;
			std::cout << myList.find(newName) << std::endl;;
		}
		else if (5 == x) {
			double x, y, distance;
			std::cout << "请输入中心x坐标：";
			std::cin >> x;
			std::cout << "请输入中心y坐标：";
			std::cin >> y;
			Point point(x, y);
			std::cout << "请输入距离：";
			std::cin >> distance;
			std::cout << myList.findAll(point, distance) << std::endl;
		}
		else
			std::cout << "选项无效" << std::endl;
		std::cout << "请输入'Y'或'y'表示继续：";
		char character;
		std::cin >> character;
		if (character != 'y' && character != 'Y')
			break;
		else
			continue;
	}
	return 0;
}