#include <iostream>
#include <vector>
 
int main(){
  int t;
  std::cin >> t;
  for (t; t >= 0; t--){
   int n;
    std::cin >> n;
    std::vector <int> s{2};
    for(int i = 1; i < n + 1; i++){
      std::cin >> s[i];
    }
    int k = -1;
    int count = 1;
    for(int i = 1; i < n + 1; i++){
      if (n == 1){
        std::cout << count;
        break;
      }
      if (s[i] == s[i + 1] && s[i] == 0){
        std::cout << k << std::endl;
        k = 0;
        break;
      }
      if (s[i] != s[i - 1] && s[i] == 1){
        count++;
      }
      if (s[i] == s[i - 1] == 1){
        count = count + 5;
      }
    }
    if(count != 1 && k != 0){
      std::cout << count;
    } 
  }
}
