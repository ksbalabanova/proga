#include <iostream>
#include <cmath>

int main() {
    double a = 0, b = 1, delta = 0.1, eps = 0.0001, zn = 1, sum = 0;
    const double e = 2.7182818284;
    double ch = 1, chlen = 0, y, i = 0;
    std::cout << 'x' << "      " << "S(x)" << "      " << "f(x)" << std::endl;
    for (double x = 0; x <= b; x = x + delta) {
        double  n;
        n = 2 * x;
        do {
            chlen = ch / zn;
            sum = sum + chlen;
            i++;
            ch = pow(n, i);
            zn = zn * i;
        } while (std::abs(chlen) > eps);
        y = pow(e, n);
        std::cout << x << "    " << sum << "    " << y << std::endl;
        i = 0;
        zn = 1;
        sum = 0;
        ch = 1;
        chlen = 0;
    }
}
