#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	double l;
	std::cin >> n >> l;
	std::vector<double> lnt(n);
	for (int i = 0; i < n; i++) std::cin >> lnt[i];
	std::sort(lnt.begin(), lnt.end());

	double d = lnt[0];
	for (int i = 1; i < n; i++) {
		double comp = (lnt[i] - lnt[i - 1]) / 2;
		d = std::max(d, comp);
	}
	double last = l - lnt[n - 1];

	std::cout << std::fixed << std::setprecision(10) << std::max(d, last);
}