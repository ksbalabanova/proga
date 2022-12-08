#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n;
        std::cin >> n;
        int tmp;
        std::cin >> tmp;
        for (int i = 0; i < n - 1; i++) {
            int a_i;
            std::cin >> a_i;
            tmp &= a_i;
        }
        std::cout << tmp << std::endl;
    }
    return 0;
}
