#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        std::string s;
        std::cin >> s;
        if (s.size() == 1) {
            std::cout << "NO" << std::endl;
        }
        if (s.size() == 2) {
            if (s[0] == s[1]) {
                std::cout << "YES" << std::endl;
            }
            if (s[0] != s[1]) {
                std::cout << "NO" << std::endl;
            }

        }
        int j = 0;
        int tmp = 0;
        if (s.size() > 2) {
            while (j + 2 < s.size()) {
                if ((s[0] != s[1]) || (s[j] != s[j + 1] && s[j + 1] != s[j + 2]) || (s[s.size() - 2] != s[s.size() - 1])) {
                    std::cout << "NO" << std::endl;
                    tmp = 1;
                    break;
                }
                j++;
            }
            if (tmp == 0) {
                std::cout << "YES" << std::endl;
            }
        }
    }
    return 0;
}
