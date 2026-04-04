#include <iostream>
using ll = long long;

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n, m, a;
	std::cin >> n >> m >> a;

	if (n % a) {
		int diff = a - (n % a);
		n += diff;
	}
	if (m % a) {
		int diff = a - (m % a);
		m += diff;
	}

	ll cw = n / a;
	ll ch = m / a;
	ll res = cw * ch;
	std::cout << res << std::endl;
}