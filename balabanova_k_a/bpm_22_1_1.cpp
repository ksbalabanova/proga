#include <iostream>
#include <cmath>

int main() {
    double eps = 0.0001, delta_x = 0.05, sum = 0, chlen, i = 1;
    std::cout << 'x' << '   ' << 'sum' << std::endl;
    for (double x = 0.1; x <= 1; x += 0.05) {
        do {
            sum = sum + chlen;
            chlen = (std::pow(-1, i + 1) * std::pow(x, 2 * i + 1) )/ (4 * i * i - 1);
            i++;
        } while (std::abs(chlen) >= eps);
            std::cout << x << '  ' << sum << std::endl;
    }
    return 0;
}
