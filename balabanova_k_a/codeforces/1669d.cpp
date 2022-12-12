#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        s = s + 'W';
        int w_count = 1, b_count = 0, r_count = 0;
        for (int i = 0; i < n + 1; i++) {
            if (s[i] == 'W' && b_count + r_count == 1) {
                w_count = 0;
            }
            if (s[i] == 'W') {
                b_count = 0;
                r_count = 0;
            }
            if (s[i] == 'R') {
                r_count = 1;
            }
            if (s[i] == 'B') {
                b_count = 1;
            }
        }
        if (w_count == 0) {
            std::cout << "NO" << std::endl;
        }
        else {
            std::cout << "YES" << std::endl;
        }
    }
    return 0;
}
