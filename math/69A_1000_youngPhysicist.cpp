#include <iostream>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	int n;
	std::cin >> n;

	int sumX = 0;
	int sumY = 0;
	int sumZ = 0;
	for (int i = 0; i < n; i++) {
		int x, y, z;
		std::cin >> x >> y >> z;
		sumX += x;
		sumY += y;
		sumZ += z;
	}
	if (!sumX && !sumY && !sumZ) std::cout << "YES";
	else std::cout << "NO";
}