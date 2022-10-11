#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int x, y, z;
    int fx = 0, fy = 0, fz = 0;
    for (n; n > 0; n = n - 1) {
        std::cin >> x >> y >> z;
        fx = fx + x;
        fy = fy + y;
        fz = fz + z;
    }
    if (fx == 0 && fy == 0 && fz == 0) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}
