#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector <int> arr1;
    arr1.resize(n + 1);
    std::vector <int> arr2;
    arr2.resize(n + 1);
    for (int i = 1; i < n + 1; i++) {
        std::cin >> arr1[i];
    }
    for (int i = 1; i < n + 1; i++) {
        int m, l;
        m = arr1[i];
        l = i;
        arr2[m] = l;
    }
    for (int i = 1; i < n + 1; i++) {
        std::cout << arr2[i] << ' ';
    }
    return 0;
}
