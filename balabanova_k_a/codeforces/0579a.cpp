#include <iostream>

int main() {
    int x;
    std::cin >> x;
    int ans = 0;
    while (x != 0) {
        if ((x % 2) & 1) {
            ans = ans + 1;
        }
        x >>= 1;
    }
    std::cout << ans;
    return 0;
}
