#include <iostream>
#include <vector>
//работает криво

int main() {
    int t;
    std::cin >> t;
    for (t; t >= 0; t--) {
        std::vector <int> a;
        std::vector <int> b;
        int n;
        std::cin >> n;
        a.resize(n * 2);
        b.resize(n * 2);
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            std::cin >> b[i];
        }
        for (int i = n; i < n * 2; i++) {
            b[i] = a[i - n];
        }
        int m = n * 2 - 1;
        while (m >= 0) {
            int i = 0;
            while (i < m) {
                if (b[i] > b[i + 1]) {
                    int tmp = b[i];
                    b[i] = b[i + 1];
                    b[i + 1] = tmp;
                }
                i++;
            }
            m--;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            a[i] = 0;
        }
        for (int i = 0; i < n * 2 - 2; i++) {
                a[i] = b[i + 1] - b[i];
                ans = ans + a[i];
        }
        ans = ans + (b[n * 2 - 1] - b[n * 2 - 2]) - (b[n] - b[n - 1]);
        std::cout << ans;
    }
    return 0;
}
