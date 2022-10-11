#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (t; t >= 0; t--) {
        int n;
        int m = 0;
        std::cin >> n;
        if (n > 2) {
            int b = 1;
            int a = n - 1;
            while (a > b) {
                a--;
                b++;
                m++;
            }
            std::cout << m << std::endl;
        }
        else {
            std::cout << 0 << std::endl;
        }
    }
}
