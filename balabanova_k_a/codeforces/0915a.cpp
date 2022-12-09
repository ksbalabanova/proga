#include <iostream>
#include <vector>

int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector <int> arr;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int nmax = 0, l;
    for (int i = 0; i < n; i++) {
        if (k % arr[i] == 0 && arr[i] > nmax) {
            nmax = arr[i];
        }
    }
    l = k / nmax;
    std::cout << l;
    return 0;
}
