#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        int n, m, sx, sy, d;
        int up, down, left, right;
        std::cin >> n >> m >> sx >> sy >> d;
        up = sx - d;
        down = sx + d;
        left = sy - d;
        right = sy + d;
        int ans;
        if (up <= 1 && down >= n) {
            ans = -1;
        }
        else if (left <= 1 && right >= m) {
            ans = -1;
        }
        else if ((up <= 1 && left <= 1) || (down >= n && right >= m)) {
            ans = -1;
        }
        else {
            ans = n + m - 2;
        }
        std::cout << ans << std::endl;
    }
    return 0;
}
