#include <iostream>
#include <vector>
 //не проходит по времени, работает правильно
int main() {
    int n;
    long long k;
    std::cin >> n;
    std::cin >> k;
    std::vector <int> arr;
    arr.resize(n);
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    if (n > 1) {
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
    else {
        if (arr[0] <= arr[1]) {
            std::cout << arr[1];
         }
        else {
            std::cout << arr[0];
        }
    }
    return 0;
}
