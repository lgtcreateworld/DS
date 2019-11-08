#include <iostream>

void conversion(int a);
int main()
{
	int a;
	std::cout << "请输入一个非负十进制数：";
	std::cin >> a;
	conversion(a);
	return 0;
}
void conversion(int a) {
	int times = 0;
	int outCome = 0;
	int temp = a;
	if (a > 7) {
		while (temp != 0) {
			outCome = temp / 8;
			temp /= 8;
			times++;
		}
		int* arr = new int[times];
		for (int i = 1; i <= times; i++) {
			int out = a % 8;
			a /= 8;
			arr[times - i] = out;
		}
		std::cout << "对应的八进制数为：";
		for (int i = 0; i < times; i++)
			std::cout << arr[i];
		delete[] arr;
	}
	else {
		std::cout << "对应的八进制数为：" << a;
	}
}