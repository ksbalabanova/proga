#include <iostream>
#include <array>

int main() {
    int a, m;
    std::cin >> a >> m;
    const int nmax = 10000;
    std::array <int, nmax> mod{0};//массив, для запоминания остатков
    int x;
    x = a;
    int index = 0, tmp = 0;//tmp - отметка, чтобы выводилось только одно слово
        do {
            x = x + (x % m);
            index = x % m;
            if (mod[x % m] == 1) {
                std::cout << "No";
                tmp++;
                break;
            }
            mod[index]++;
        } while (x % m != 0);
        if (tmp == 0) {
            std::cout << "Yes";
        }
        return 0;
}
