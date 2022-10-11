#include <iostream>
#include <array>

int main() {
	int t;
	std::cin >> t;
	for (t; t > 0; t = t - 1) {
		int n, k, r, c;
		std::cin >> n >> k >> r >> c;
		const int nmax = 1000;
		for (int m = 1; m <= n; m = m + 1) {// цикл для каждой строки квадрата
			std::array <int, nmax> arr{ 2 };
			for (int l = 1; l <= n; l = l + 1) {//перебираем элементы строки
				if (k == 1) {
					arr[l] = 1;
				}
				else if ((c + r) % k == (l + m) % k) {
					arr[l] = 1;
				}
				else {
					arr[l] = 0;
				}
				if (arr[l] == 1) {
					std::cout << 'X';
				}
				if (arr[l] == 0) {
					std::cout << '.';
				}
			}
			std::cout << std::endl;
		}
	}
}
