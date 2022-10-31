#include <iostream>
#include <string>
//нужно посмотреть, что происходит если длина равна 1, если все вопросы

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        std::string s;
        std::cin >> s;
        int ans;
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
        ans = index0 - index1 + 1;
        std::cout << ans;
    }
}
