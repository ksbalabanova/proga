#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n;
        std::cin >> n;
        std::vector <int> a;
        a.resize(n);
        std::vector <int> b;
        b.resize(n);
        std::vector <int> tm;
        tm.resize(n);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i] >> b[i];
        }
        for (int i = 0; i < n; i++) {
            std::cin >> tm[i];
        }
        int all_time = 0;
        int delta = 0;
        for (int i = 0; i < n; i++) {
            all_time = all_time + (a[i] - delta + tm[i]);
            int stop_time = (b[i] - a[i] + 1) / 2;
            if (i < n - 1) {
                all_time = all_time + stop_time;
            }
            if (all_time < b[i] && i < n - 1) {
                all_time = b[i];
            }
            delta = b[i];
        }
        std::cout << all_time << std::endl;
    }
    return 0;
}
