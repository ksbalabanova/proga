#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        std::string s;
        std::cin >> s;
        int count = 0;
        int ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '?') {
                count = count + 1;
            }
        }
        if (count == s.size()) {
            ans = count;
        }
        else if (s.size() == 1) {
            ans = 1;
        }
        else {
            int index0 = -1, index1 = -1;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '0') {
                    index0 = i;
                    break;
                }
            }
            if (index0 == -1) {
                index0 = 1;
            }
            for (int i = s.size() - 1; i >= 0; i--) {
                if (s[i] == '1') {
                    index1 = i;
                    break;
                }
            }
            if (index1 == -1) {
                index1 = 0;
            }
            ans = std::abs(index0 - index1 + 1);
        }
        std::cout << ans << std::endl;;
    }
    return 0;
}
