#include <iostream>
#include <vector>
 
int main() {
    int n;
    std::cin >> n;
    std::vector <int> arr;
    arr.resize(n);
    std::vector <float> arr_one{0};
    arr_one.resize(n);
    for (int i = 0; i < n; i++) {//i - порядок посещения, arr[i] - индивидуальный номер
        std::cin >> arr[i];
    }
    if (n == 1) {
        std::cout << arr[0];
    }
    else {
        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (arr[i] == arr_one[j]) {
                    break;
                }
                if (arr[i] != arr_one[j] && arr_one[j] == 0) {
                    arr_one[j] = arr[i];
                    break;
                }
            }
        }
        for (int j = 0; j < n; j++) {
            if (arr_one[j] != 0) {
                std::cout << " " << arr_one[j];
                break;
            }
        }
    }
  return 0;
}
