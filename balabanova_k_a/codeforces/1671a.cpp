#include <string>
#include <iostream>

int main(){
    int t;
    std::cin >> t;
    for (t; t > 0; t--){
        std::string s;
        while (t > 0){
            t--;
            std::string s;
            getline (std::cin, s);
            std::cout << std::endl;
            if (s.length() == 1){
                std::cout << "NO";
                break;
            }else{
                for (int i = 1; i < s.length() - 1; i++){
                    if (s[0] != s[1]){
                        std::cout << "NO" << std::endl;
                        break;
                    }
                    if (s[s.length() - 1] != s[s.length() - 2]){
                        std::cout << "NO" << std::endl;
                        break;
                    }
                    if(s[i] != s[i - 1] && s[i] != s[i + 1]){
                        std::cout << "NO" << std::endl;
                        std::cout << s[i];
                        break;
                    } else {
                        std::cout << "YES" <<std::endl;
                        break;
                    }
                }
            }
        }
    }
}
