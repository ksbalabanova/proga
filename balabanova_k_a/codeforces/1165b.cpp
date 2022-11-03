#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector <int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::sort(arr.begin(), arr.end());
    int day = 1;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= day) {
            count++;
            day++;
        }
    }
    std::cout << count;
    return 0;
}
