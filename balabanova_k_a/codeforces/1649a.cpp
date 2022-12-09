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
        int last = -1;
        int first;
        for (int i = 0; i < n; i++) {
            std::cin >> a[i];
            if (last == -1 && a[i] == 0) {
                last = i;
            }
            if (a[i] == 0) {
                first = i;
            }
        }
        if (last == -1) {
            std::cout << 0 << std::endl;
        }
        else {
            std::cout << first - last + 2 << std::endl;
        }
    }
    return 0;
}
