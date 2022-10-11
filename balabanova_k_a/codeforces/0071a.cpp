#include <iostream>
#include <string>

int main() {
    int n, m;
    std::cin >> n;
    for (n; n >= 0; n--) {
        std::string stroka;
        getline(std::cin, stroka);
        m = stroka.size();
        if (m <= 10) {
            std::cout << stroka << std::endl;
        }
        else {
            std::cout << stroka[0] << m - 2 << stroka[m - 1] << std::endl;
        }
    }
}
