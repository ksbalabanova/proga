#include <iostream>
#include <array>

int main() {
    int n;
    std::cin >> n;
    if ((n != 0) && (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 477 == 0 || n % 447 == 0 || n % 444 == 0 || n % 777 == 0 || n % 774 == 0 || n % 744 == 0)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
}
