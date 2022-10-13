#include <iostream>
#include <vector>
 
int main(){
    int t;
    std::cin >> t;
    for (t; t >= 0; t--){
      int m, n;
      std::cin >> n >> m;
      std::vector < std::vector <char> > arr(n, std::vector <char> (m) );
      for (int i = 0; i < n; i++){//ввод массива
          for (int j = 0; j < m; j++){
              std::cin >> arr[i][j];
          }
      }
      // in, im - индекс самого близкого к краю робота
      int in = 10, im = 10;
      for (int i = 0; i < n; i++){//обработка
          for (int j = 0; j < m; j++){//запомнили индексы самого близкого к краю робота
              if (arr[i][j] == 'R' && i < in){
                  in = i;
              }
              if (arr[i][j] == 'R' &&  j < im){
                  im = j;
              }
              
          }
      }
      if (arr[in][im] != 'R'){
          std::cout << "NO" << std::endl;
      }else{
          std::cout << "YES" << std::endl;
      }
    }
}
