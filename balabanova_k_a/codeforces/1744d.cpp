#include <iostream>
#include <vector>
#include <cmath>
 
int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n;
        std::cin >> n;
        int count = 0;
        std::vector <int> arr;
        arr.resize(n);
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            while (arr[i] % 2 == 0) {
                arr[i] = arr[i] / 2;
                count++;
            }
        }
        int m = 0;
        if (count >= n) {
            std::cout << 0 << std::endl;
            m++;
        }
        int count_op = 0;
        for (int i = n - 1; i >= 0; i--) {
            int time_i;//значение индекса если считать с 1
            if (i % 2 != 0) {
                int kol_2_in_i;
                time_i = i + 1;
                kol_2_in_i = log2(time_i);
                count = count + kol_2_in_i;
                count_op++;
            }
            if (count >= n && m == 0) {
                std::cout << count_op << std::endl;
                break;
            }
            if (count_op == n / 2 && count < n) {
                std::cout << -1 <<std::endl;
                break;
            }
        }
    }
    return 0;
}
