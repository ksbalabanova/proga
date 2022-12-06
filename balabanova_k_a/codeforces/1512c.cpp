#include <iostream>
#include <string>

int main() {
    int t, a, b;
    std::cin >> t;
    for (t; t > 0; t--) {
        std::cin >> b >> a;
        std::string s;
        std::cin >> s;
        int s_1 = 0, s_0 = 0, k = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                s_1 += 1;
            }
            else if (s[i] == '0') {
                s_0 += 1;
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '?' && s[s.size() - i - 1] != '?') {
                s[i] = s[s.size() - i - 1];
                if (s[i] == '1') {
                    s_1 += 1;
                }
                else {
                    s_0 += 1;
                }
            }
        }
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '?' && s[s.size() - i - 1] == '?') {
                if (i != s.size() - i - 1) {
                    if (s_1 + 2 <= a) {
                        s[i] = '1';
                        s[s.size() - i - 1] = '1';
                        s_1 += 2;
                    }
                    else if (s_0 + 2 <= b) {
                        s[i] = '0';
                        s[s.size() - i - 1] = '0';
                        s_0 += 2;
                    }
                }
                else {
                    if (s_1 + 1 <= a) {
                        s[i] = '1';
                        s_1 += 1;
                    }
                    else if (s_0 + 1 <= b) {
                        s[i] = '0';
                        s_0 += 1;
                    }
                }
            }
        }
        int flag = 1;
        for (int i = 0; i < s.size() / 2 + 1; i++) {
            if (s[i] != s[s.size() - i - 1] || s[i] == '?') {
                flag = 0;
                break;
            }
        }
        if (a == s_1 && b == s_0 && flag == 1) {
            std::cout << s << std::endl;
        }
        else {
            std::cout << -1 << std::endl;
        }
    }
    return 0;
}
