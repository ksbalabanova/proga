#include <iostream>

int main() {
    int x = 0;
    int m = 0;
    std::cin >> x;
    if (x % 5 == 0) {
        m = x / 5;
        std::cout << m;
    }
    else {
        m = x / 5 + 1;
        std::cout << m;
    }
}
