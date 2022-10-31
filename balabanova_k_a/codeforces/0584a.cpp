#include <iostream>
#include <cmath>

int main() {
    int n, t, ans, zero = 0;
    std::cin >> n >> t;
    ans = pow(10, n - 1);
        while (ans % t != 0) {
            ans++;
            zero++;
            if (zero >= t && ans % 2 != 0){
                std::cout << -1;
                break;
            }
        }
        if (zero < t) {
            std::cout << ans;
        }
    return 0;
}
