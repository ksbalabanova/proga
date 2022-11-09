#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
    int n;
    std::cin >> n;
    std::vector <int> arr;
    arr.resize(n * 4);
    std::vector <int> ave;
    ave.resize(n);
    for (int i = 0; i < n * 4; i++) {
        std::cin >> arr[i];
    }
    int index1 = 0, tmp = 0, sum = 0, index2 = 0;
    while (index1 < n * 4) {
        sum += arr[index1];
        if ((index1 + 1) % 4 == 0) {
            ave[index2] = sum;
            index2++;
            sum = 0;
        }
        index1++;
    }
    tmp = ave[0];
    int ans = 0;
    //for (int i = 0; i < n; i++) {
    //    std::cout << "ave: " << ave[i] << ' ';
    //}
    //std::cout << "tmp: " << tmp << std::endl;
    std::sort(ave.begin(), ave.end());
    //for (int i = 0; i < n; i++) {
    //    std::cout << "ave: " << ave[i] << ' ';
    //}
    for (int i = n - 1; i >= 0; i--) {
        if (ave[i] == tmp) {
            ans = n - i;
            break;
        }
    }
    std::cout << ans;
    return 0;
}
