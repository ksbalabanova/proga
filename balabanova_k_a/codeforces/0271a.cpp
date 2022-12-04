#include<iostream>

int main() {
    int y, a, b, c, d;
    std::cin >> y;
    y = y + 1;
    a = y / 1000;
    b = (y - a*1000) / 100;
    c = (y - a * 1000 - b * 100) / 10;
    d = y % 10;
    while (a == b || a == c || a == d || b == c || b == d || c == d) {
        y++;
        a = y / 1000;
        b = (y - a * 1000) / 100;
        c = (y - a * 1000 - b * 100) / 10;
        d = y % 10;
    }
    std::cout << y;
    return 0;
}
