#include <iostream>
#include <vector>

int main() {
    int n;
    long long k;
    std::cin >> n;//люди и победы
    std::cin >> k;
    std::vector <int> arr;
    arr.resize(n);
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    tmp = arr[0];
    int in = 1;
    while (k != 0) {
        if (tmp < arr[in]) {
            tmp = arr[in];
            in++;
            break;
        }
        if (tmp >= arr[in]) {
            k--;
        }
    }
    std::cout << tmp;
}
