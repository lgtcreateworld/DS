#include <iostream>
#include <string>
#include <stack>

bool match(std::string s);
int convert(char c);
int main() 
{
	std::cout << "�����������ź�С������ɵı��ʽ��";
	std::string s;
	std::cin >> s;
	if (match(s))
		std::cout << "ƥ��" << std::endl;
	else
		std::cout << "�˴�����ƥ�䲻�Ϸ�" << std::endl;

	return 0;
}
int convert(char c) {
	int numOfBracket;
	switch (c) {
	case '[':
		numOfBracket = 0;
		break;
	case '(':
		numOfBracket = 1;
		break;
	case ')':
		numOfBracket = 2;
		break;
	case ']':
		numOfBracket = 3;
		break;
	default:
		numOfBracket = -1;
		break;
	}
	return numOfBracket;
}
bool match(std::string s) {
	int isMatch = false;
	if (s.length() % 2 != 0)
		return isMatch;
	std::stack<char> chars;
	for (int i = 0; i < s.length(); i++) {
		char c = s.c_str()[i];
		if (c == '(' || c == '[')
			chars.push(c);
		else if (c == ')' || c == ']') {
			if (convert(c) + convert(chars.top()) != 3)
				return isMatch;
			else
				chars.pop();
		}
	}
	if (chars.empty())
		isMatch = true;
	return isMatch;
}