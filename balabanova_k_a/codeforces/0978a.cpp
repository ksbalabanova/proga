#include <iostream>
#include <array>

int main() {
	int n;
	int k = 0;
	std::cin >> n; //Ввели колличество членов в массиве
	const int nmax = 50; //Создали максимальную неизменную длину массива
	std::array <int, nmax> a{ 0 }; //Создали массив максимальной длины, заполненный нулями
	for (int i = 0; i < n; i = i + 1) {
		std::cin >> a[i];
	}
	for (int j = n - 1; j >= 0; j = j - 1) {
		for (int i = j - 1; i >= 0; i = i - 1) {
			if (a[i] == a[j]) {
				a[i] = 0;
			}
		}
	}
	for (int i = n - 1; i >= 0; i = i - 1) {
		if (a[i] != 0) {
			k = k + 1;
		}
	}
	std::cout << k << std::endl;
	for (int i = 0; i < n; i = i + 1) {
		if (a[i] != 0) {
			std::cout << a[i] << " ";
		}
	}
}
