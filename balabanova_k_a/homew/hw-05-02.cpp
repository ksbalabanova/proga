#include <iostream>
#include <cmath>

int main() {
    double a = 0, b = 1, delta = 0.05, eps = 0.001, ch1, ch2;
    double sum = 0, chlen = 0;
    const double PI = acos(-1.0);
    std::cout << 'x' << "      " << "S(x)" << "      " << "f(x)" << std::endl;
    for (double x = a; x <= b + 0.05; x = x + delta) {
        double i = 1, y;
        do {
            ch1 = pow(x, i);
            ch2 = sin(i * PI / 4);
            i++;
            chlen = ch1 * ch2;
            sum = sum + chlen;
        } while (std::abs(chlen) > eps);
        y = (x * sin(PI / 4)) / (1 - 2 * x * cos(PI / 4));
        std::cout << x << "      " << sum << "      " << y << std::endl;
        i = 0;
        ch1 = 0;
        sum = 0;
        ch2 = 0;
        chlen = 0;
    }
}
