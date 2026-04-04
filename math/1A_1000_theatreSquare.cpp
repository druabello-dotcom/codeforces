#include <iostream>

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

	int cw = n / a;
	int ch = m / a;
	long long res = cw * ch;
	std::cout << res << std::endl;
}