#include <iostream>
#include <vector>
 
int main(){
  int n;
  std::cin >> n;
  std::vector <int> ktokomy {0};
  std::vector <int> ktoot {0};
  for (int i = 1; i < n + 1; i++){
    std::cin >> ktokomy[i];
  }
  for (int i = 1; i < n + 1; i++){
    int m, l;
    m = ktokomy[i];
    l = i;
    ktoot [m] = l;
  }
  for (int i = 1; i < n + 1; i++){
    std::cout << ktoot[i] << ' ';
  }
}
