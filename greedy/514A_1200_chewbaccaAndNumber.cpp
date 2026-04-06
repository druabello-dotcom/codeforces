#include <iostream>
#include <string>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string num;
	std::cin >> num;

	for (int i = 0; i < num.size(); i++) {
		int t = num[i] - '0';
		if (5 <= t) {
			if (!i && t == 9) {
				t = 9;
			} else t = 9 - t;
			num[i] = t + '0';
		}
	}
	std::cout << num;
}