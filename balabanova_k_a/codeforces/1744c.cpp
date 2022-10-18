#include <iostream>
#include <string>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n;
        char c;
        int count = 0;
        std::cin >> n >> c;
        std::string s = "";
        std::cin >> s;
        std::string twos = s + s;
        int max = - 1;
        for (int i = 0; i < twos.length(); i++) {
            int delta = 0;
            if (s[i] == c) {
                while (s[i + delta] != 'g') {
                    delta++;
                }
            }
            if (delta > max) {
                max = delta;
            }
        }
        std::cout << max;
    }
}
