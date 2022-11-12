#include <iostream>
#include <vector>
#include <algorithm> 

int main() {
    int n, A, B;
    std::cin >> n >> A >> B;
    std::vector <double> arr;
    arr.resize(n);
    double S = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
        S = S + arr[i];
    }
    S = S - arr[0];
    int min;//звпрмнили первое значение, т.к его нельхя исключать
    min = arr[0];
    arr[0] = 0;
    std::sort(arr.begin(), arr.end());
    int j = 1;
    double sum = 0;
    int k = n - 1;
    double tmp;
    tmp = min * A / (S + min);
    while (sum < B && tmp < B && j < n) {
        if (sum == 0) {//через первый вода идет всегда
            sum = sum + tmp;
        }
        sum = sum + (arr[j] * A / (S + min));
        S = S - arr[k];
        k--;
        j++;
    }
    std::cout << j - 1;
    return 0;
}
