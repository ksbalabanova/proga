#include <iostream>
#include <array>

int main() {
    int n;
    int m = 0;
    std::cin >> n;
    std::array <int, 100> arr;
    for (int k = 0; k < n; k++) {//ввели массив
        std::cin >> arr[k];
    }
    for (int k = 0; k < n; k++) {
        if (arr[k] == 1) {
            m = m + 1;
        }
    }
    if (m == 0) {
        std::cout << "EASY";
    }
    else {
        std::cout << "HARD";
    }
}
