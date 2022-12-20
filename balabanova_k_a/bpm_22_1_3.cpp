#include <iostream>
#include <string>

int main() {
    char n;
    std::string s;
    std::cin >> s;
    std::cin >> n;
    int tmp = 0;
    int count_n = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e') {
            s[i] = '1';
        }
        else if (s[i] == n) {
            s[i] = n;
        }
        else {
            s[i] = '0';
        }
    }
    int j = 0;
    while (j < (s.size() - 1)) {
        if ((s[j] == '0' && s[j + 1] == '1') || (s[j] == '1' && s[j + 1] == '1')  || (s[j] == '1' && s[j + 1] == '0')) {
            tmp++;
            j+=2;
        }
        else if(s[i] == n){
            j++;
            count_n++;
        }
        else{
        break;
        }
    }
    if (tmp  + count_n == (s.size() + count_n * 2 - 1) / 2) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }   
}
