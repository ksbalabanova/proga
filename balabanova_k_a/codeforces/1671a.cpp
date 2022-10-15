#include <string>
#include <iostream>

int main(){
  int t;
  //std::cout << "Введите кол-во наборов:" << std::endl;
  std::cin >> t;
    for (t; t > 0; t--){
      //std::cout << "Введите строку s:" << std::endl;
      std::string s;
      getline (std::cin, s);
      //std::cout << s.length();
      if (s.size() == 1){
        std::cout << "NO1";
        break;
      } else {
          for (int i = 1; i < s.length() - 1; i++){
            if (s[0] != s[1]){
              std::cout << "NO2" << std::endl;
              break;
            }
            if (s[s.length() - 1] != s[s.length() - 2]){
              std::cout << "NO3" << std::endl;
              break;
            }
            if(s[i] != s[i - 1] && s[i] != s[i + 1]){
              std::cout << "NO4" << std::endl;
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
