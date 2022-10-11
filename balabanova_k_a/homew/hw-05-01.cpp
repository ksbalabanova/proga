#include <iostream>
#include <cmath>

int main() {

    double a = -1, b = 1, delta = 0.1, eps = 0.001, sum = 0, chlen = 1, ks = -1, ch = 1, zn = 1, i = 1;
    std::cout << 'x' << "      " << "S(x)" << "      " << "f(x)" << std::endl;
    for (double x = -1; x <= 1; x += 0.1) {//ch числитель, zn знаменатель
        do {
            sum = sum + chlen;
            ch = ch * x * x;
            zn = zn * 2 * i * (2 * i - 1);
            i++;
            chlen = ks * ch / zn;
            ks *= -1;
        } while (std::abs(chlen) > eps);
        std::cout << x << "      " << sum << "      " << cos(x) << std::endl;
        sum = 0;
        ks = -1;
        ch = 1;
        zn = 1;
        i = 1;
        chlen = 1;
    }
}
