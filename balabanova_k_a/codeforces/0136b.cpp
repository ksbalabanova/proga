#include <iostream>

int main() {
	int a, c, i = 1, ans = 0; 
	std::cin >> a >> c;
	while (a > 0 || c > 0) {
		ans = ans + i * ((c % 3 - a % 3 + 3) % 3);
		c = c / 3;
		a = a / 3;
		i = i * 3;
	}
	std::cout << ans << std::endl;
	return 0;
}
