#include <iostream>
#include <string>
 
int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    int x = 0, y = 0;
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'R') {
            x++;
        }
        else {
            y++;
        }
        if (s[i] == s[i + 1] && x == y) {
            ans++;
        }
    }
    std::cout << ans;
    return 0;
}
