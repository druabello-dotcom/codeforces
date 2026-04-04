#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::unordered_set<char> vow {'a', 'o', 'y', 'e', 'u', 'i'};

	std::string input;
	std::cin >> input;

	for (int i = 0; i < input.size(); i++) {
		char c = input[i];
		c = static_cast<char>(std::tolower(static_cast<unsigned char>(c)));
		if (vow.count(c)) continue;
		else {
			std::cout << '.' << c;
		}
	}
}