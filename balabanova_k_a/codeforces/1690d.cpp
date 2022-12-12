#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n, k; //длина и отрезок
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        int count_w = std::count(s.begin(), s.begin() + k, 'W');
        int ans = count_w;
        for (int i = k; i < n; i++) {
            count_w = count_w + ((s[i] == 'W') - (s[i - k] == 'W'));
            ans = std::min(ans, count_w);
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
