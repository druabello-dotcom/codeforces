#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m;

	std::cin >> n;
	std::vector<int> boys(n);
	for (int i = 0; i < n; i++) std::cin >> boys[i];
	std::cin >> m;
	std::vector<int> girls(m);
	for (int i = 0; i < m; i++) std::cin >> girls[i];

	std::sort(boys.begin(), boys.end());
	std::sort(girls.begin(), girls.end());

	int i = 0;
	int j = 0;
	int c = 0;
	while (i < n && j < m) {
		int b = boys[i];
		int g = girls[j];
		int diff = abs(b - g);

		if (1 < diff) {
			if (b < g) i++;
			else j++;
		} else {
			c++;
			i++;
			j++;
		}
	}
	std::cout << c;
}