#include <iostream>
#include <string>
 
int main() {
    std::string s;
    std::cin >> s;
    std::string have = "hello";
    int index = 0, count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == have[index]) {
            s[i] = '.';
            index++;
        }
        if (index == 4) {
            std::cout << "YES";
            break;
        }
    }
    if (index != 4) {
        std::cout << "NO";
    }
    return 0;
}
