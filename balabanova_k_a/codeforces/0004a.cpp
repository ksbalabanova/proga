#include <iostream>

int main() {
    int w = 0;
    std::cin >> w;
    if (w % 2 == 0 && 2 < w) {
        std::cout << "Yes";
    }
    else {
        std::cout << "No";
    }
}
