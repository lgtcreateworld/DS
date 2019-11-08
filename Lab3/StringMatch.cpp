#include <iostream>
#include <string>

int StringMatch(const std::string& string, const std::string& subString);

int main() {
	std::string s1 = "aaabbcccd";
	std::string s2 = "bbcccdd";
	int out = StringMatch(s1, s2);
	if (out != s1.length() && out != -1)
		std::cout << out << std::endl;
	else
		std::cout << "No" << std::endl;
	return 0;
}
int StringMatch(const std::string& string, const std::string& subString) {
	int i = 0, j = 0;
	while (i < string.length() && j < subString.length()) {
		if (string[i] == subString[j]) {
			i++;
			j++;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
	}
	if (j >= subString.length())
		return i - j;
	else
		return -1;
}