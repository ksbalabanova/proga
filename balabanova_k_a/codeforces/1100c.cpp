#include <iostream>
#include <math.h>
#include <cmath>

int main() {
    double R, a;
    int n, r;
    const double PI = acos(-1.0);
    std::cin >> n >> r;
    a = PI / n; // нашли угол
    R = (std::sin(a) * r) / (1 - std::sin(a));
    std::cout << std::setprecision(10) << R;
}
