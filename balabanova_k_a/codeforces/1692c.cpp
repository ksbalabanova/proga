#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        const int n = 8;
        std::cout << std::endl;
        std::vector <std::vector <char>> arr(n, std::vector <char>(n));
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                std::cin >> arr[i][j];
            }
        }
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {

                if ( i + 1 <= 7 && i - 1 >= 0 && j + 1 <= 7 && j - 1 >= 0 && arr[i][j] == '#' && arr[i - 1][j - 1] == '#' && arr[i + 1][j - 1] == '#' && arr[i + 1][j + 1] == '#' && arr[i - 1][j + 1] == '#') {
                    std::cout << i + 1 << ' ' << j + 1;
                }
            }
        }
    }
    return 0;
}
