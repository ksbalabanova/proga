#include <iostream>

int ary[5][5];

int main() {

    for (int i = 0; i < 5; i = i + 1) {
        for (int j = 0; j < 5; j = j + 1) {
            std::cin >> ary[i][j];
        }
    }
    for (int i = 0; i < 5; i = i + 1) {
        for (int j = 0; j < 5; j = j + 1) {
            if (ary[i][j] == 1) {
                std::cout << abs(i - 2) + abs(j - 2);
                break;
            }
        }
    }
}
