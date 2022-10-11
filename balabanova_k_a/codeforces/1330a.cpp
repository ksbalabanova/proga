#include <iostream>
#include <array>

int main() {
	int t;
	std::cin >> t; //вводим кол-во наборов
	for (t; t > 0; t = t - 1) {
		int n, x, i;
		std::cin >> n >> x; //вводим кол-во раундов и дополнительных раундов 
		const int nmax = 300;
		std::array <int, nmax> arr{ 0 }; //создали массив, заполненный нулями
		for (i = 0; i < n; i = i + 1) { // вводим места, которые занял игрок
			int a;
			std::cin >> a;
			arr[a] = 1;
		}
		int v;
		for (v = 1; x > 0 || arr[v] == 1; v = v + 1) { // считаем сколько подряд мест с дополнительными игрок мог занять
			if (arr[v] == 0) {
				x = x - 1;
			}
		}
		std::cout << (v - 1) << std::endl;
	}
}
