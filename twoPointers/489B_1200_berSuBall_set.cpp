#include <iostream>
#include <set>
#include <iterator>
#include <cmath>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m;
	std::multiset<int> boys;
	std::multiset<int> girls;
	std::cin >> n;
	while (n--) {
		int a;
		std::cin >> a;
		boys.insert(a);
	}
	std::cin >> m;
	while (m--) {
		int b;
		std::cin >> b;
		girls.insert(b);
	}

	auto i = boys.begin();
	auto j = girls.begin();
	int c = 0;
	while (i != boys.end() && j != girls.end()) {
		int b = *i;
		int g = *j;
		int diff = abs(b - g);

		if (1 < diff) {
			if (b < g) ++i;
			else ++j;
		} else {
			c++;
			++i;
			++j;
		}
	}
	std::cout << c;
}