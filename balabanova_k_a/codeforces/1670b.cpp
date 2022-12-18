#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int t, a, n, i;
    int max = 0;
    std::string s;
    char tmp;
    std::cin >> t;
    for (t; t > 0; t--) {
        std::cin >> a >> s >> n;
        std::set <char> set_0;
        int k = 0;
        for (n; n > 0; n--) {
            std::cin >> tmp;
            set_0.insert(tmp);
        }
        for (i = 0; i < s.size(); i++) {
            if (set_0.count(s[i])) {
                k = i - k;
                if (max < k) {
                    max = k;
                }
                k = i;
            }
        }
        std::cout << max << std::endl;
    }
    return 0;
}
