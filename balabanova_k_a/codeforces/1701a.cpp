#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int count = 0;
        const int n = 2;
        std::vector <std::vector <int>> arr(n, std::vector <int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> arr[i][j];
                if (arr[i][j] == 1) {
                    count++;
                }
            }
        }
        if (count == 1 || count == 2 || count == 3) {
            std::cout << 1 << std::endl;
        }
        if (count == 0) {
            std::cout << 0 << std::endl;
        }
        if (count == 4) {
            std::cout << 2 << std::endl;
        }
    }
    return 0;
}
