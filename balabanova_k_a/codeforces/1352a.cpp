#include <iostream>
#include <vector>

int main() {
	int t;
	std::cin >> t; //колличество чисел
	for (t; t > 0; t = t - 1) { //вводим каждое число
		int n;
		std::cin >> n;
		std::vector <int> ans; //создали массив для ответа
		int power = 1; // создали переменную, чтобы разделять разные разряды
		while (n > 0) {
			if (n % 10 > 0) {
				ans.push_back((n % 10) * power);
			}
			n /= 10;
			power *= 10;
		}
		std::cout << ans.size() << std::endl; //вывели колличество слагаемых;
		int s = ans.size();
		for (int i(0); i < s; i = i + 1) {
			std::cout << ans[i] << " ";
		}
		std::cout << std::endl;
	}
}
