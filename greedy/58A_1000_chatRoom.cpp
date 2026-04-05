#include <iostream>
#include <string>
#include <vector>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string s;
	std::cin >> s;
	std::vector<char> h {'h', 'e', 'l', 'l', 'o'};

	int c = 0;
	for (int i = 0; i < s.size() && c < 5; i++) {
		if (s[i] == h[c]) c++;
	}

	if (c == 5) std::cout << "YES";
	else std::cout << "NO";
}