#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n;
        std::cin >> n;
        std::vector <int> arr;
        arr.resize(n);
        int m1 = 0, m2 = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] > m1) {
                m1 = arr[i];
            }
            if (arr[i] > m2 && arr[i] < m1) {
                m2 = arr[i];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                ans = n - 1;
                break;
            }
            else {
                for (int j = 0; j < n; j++) {
                    if (arr[i] == arr[j] && i != j) {
                        ans = n;
                    }
                    else {
                        ans = (m1 - m2) + 1;
                    }
                }
            }
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
