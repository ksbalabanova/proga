#include <iostream>
#include <string>
//не проходит по времени, работает правильно
int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n;
        char c;
        std::cin >> n >> c;
        std::string s;
        std::cin >> s;
        std::string twos = s + s;
        int max = -100;
        for (int i = 0; i < twos.size(); i++) {
            int delta = 0;
            if (twos[i] == c) {
                while (twos[i + delta] != 'g' && (i + delta) < twos.size()) {
                    delta++;
                }
            }
            if (delta > max) {
                max = delta;
            }
        }
        std::cout << max << std::endl;
    }
}
