#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n;
        std::cin >> n;
        std::vector <int> arr;
        arr.resize(n);
        int count_0 = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
            if (arr[i] == 0) {
                count_0++;
            }
        }
        int tmp = 0;
        int ans = 0;
        if (count_0 != 0) {
            ans = n - count_0;
        }
        std::sort(arr.begin(), arr.end());
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1] && count_0 == 0) {
                ans = n;
                tmp = 1;
            }
        }
        if (tmp == 0 && count_0 == 0) {
            ans = n + 1;
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
