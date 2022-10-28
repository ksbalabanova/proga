#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n;
        std::cin >> n;
        std::vector <int> a{ 0 };
        a.resize(n);
        for (int i = 1; i < n + 1; i++) {//ввели массив
            std::cin >> a[i];
        }
        int b;
        for (int i = 1; i < n + 1; i++) {
            if (a[i] != a[i + 1] && a[i] != a[i + 2]) {
                a[i] = 0;
                break;
            }
            if (a[i] != a[i + 1] && a[i] == a[i + 2]) {
                a[i + 1] = 0;
                break;
            }
            if (a[n] != a[n - 1] && a[n - 1] != 0) {
                a[n] = 0;
                break;
            }
        }
        for (int i = 1; i < n + 1; i++) {
            if (a[i] == 0) {
                std::cout << i << std::endl;
            }
        }
    }
}
