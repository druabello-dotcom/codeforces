#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m;
	std::cin >> n;
	std::map<int, int, std::greater<int>> p;

	int prev = 1;
	for (int i = 1; i <= n; i++) {
		int a;
		std::cin >> a;
		p.insert({prev, i});
		prev += a;
	}

	std::cin >> m;
	while (m--) {
		int q;
		std::cin >> q;
		std::cout << p.lower_bound(q)->second << '\n';
	}
}