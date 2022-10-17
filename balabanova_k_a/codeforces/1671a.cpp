#include <string>
#include <iostream>
 
int main(){
  int t;
  std::cin >> t;
  for (t; t > 0; t--){
    std::string s = "";
    std::cin >> s;
    int h = 0;
    int k = 0;
    for (int i = 0; i < s.length(); i++){
      if(s[i] == s[i + 1]){
        k = k + 1;
      } else {
        if(k > 1){
          h = 1;
          k = 1;
        }else{
          h = 0;
          k = 1;
          break;
        }
      }
    }
    if (h == 1){
      std::cout << "YES" << std::endl;
    }else{
      std::cout << "NO" << std::endl;
    }
    h = 0;
    k - 0;
  }
}
