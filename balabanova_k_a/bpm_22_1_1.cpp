#include <iostream>
#include <cmath>

int main() {
    double eps = 0.0001, delta_x = 0.05, sum = 0, chlen = 0, i = 1, tmp = 0;
    std::cout << 'x' << "    " << "sum" << std::endl;
    for (double x = 0.1; x <= 1; x += 0.05) {
        do {
            chlen = (std::pow(-1, i + 1) * std::pow(x, 2 * i + 1) )/ (4 * i * i - 1);
            tmp += chlen;
            i++;
        } while (std::abs(chlen) >= eps);
        sum += tmp;
            std::cout << x << "    " << sum << std::endl;
        sum = 0;
        chlen = 0;
        i = 0;
        tmp = 0;
    }
    return 0;
}
