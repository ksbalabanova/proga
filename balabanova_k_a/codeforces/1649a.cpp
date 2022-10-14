#include <iostream>
#include <vector>
 
int main(){
  int t;
  std::cin >> t;
  for (t; t >= 0; t--){
    int n;
    std::cin >> n;//кол-во локаций
    std::vector <int> a{2};
    for (int i = 1; i < n + 1; i ++){
      std::cin >> a[i];
    }//проверила все до этой строки
    int x = 0; //счетчик монет
    int ferst = 100, last = - 1; //индексы первого и последнего нуля
    for (int i = 1; i < n + 1; i ++){
      if (a[i] == 0 && i < ferst){
        ferst = i - 1;
      }
      if (a[i] == 0 && i > last){
        last = i + 1;
      }
    } //индексы выводит правильно
    if (last != - 1 && ferst != 100){
      x = last - ferst;
      std::cout << x;
    } else {
      std::cout << x;
    }
  }
}
