#include <iostream>
#include <string>

int main() {
    char n;
    std::string s;
    std::cin >> s;
    std::cin >> n;
    int tmp = 0;
    if (s[s.size() - 1] == n) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e') {
                s[i] = '1';
            }
            else if (s[i] == n) {
                s[i] = n;
            }
            else {
                s[i] = '0';
            }
            int j = 0;
            while (j < (s.size() - 1)) {
                if (s[j] + s[j + 1] != '00') {
                    tmp++;
                }
            }
            if (tmp == s.size() - 1) {
            std::cout << "YES"
            }
            else {
            std::cout << "NO";
            }
    }
    else {
        std::cout << "NO";
    }
}
