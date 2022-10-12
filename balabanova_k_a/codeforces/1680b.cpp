/*#include <iostream>

int main(){
    int t;
    std::cin >> t;
    for (t; t >= 0; t--){
        int n, m;
        std::cin >> n >> m >> std::endl;
        char arr [n][m];
        for (n; n >= 0; n--){
            std::cout << std::endl;
            for (m; m >= 0; m--){
                std::cin >> a[n][m];
            }
        }
        int nmax = -10;//чтобы найти индексы крайнего робота
        int mmax = -10;
    }
    
    
    
    
}*/

#include <iostream> 
#include <vector>

int main(){
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
              if (arr[i][j] == 'R' && i < in && j < im){
                  in = i;
                  im = j;
              }
              
          }
      }
      /*for (int i = 0; i < n; i++){//обработка
          for (int j = 0; j < m; j++){
              int dmin, d;
              dmin = in * in + im * im;
              d = i * i + j * j;
              if (d < dmin and arr [i][j] == 'R'){
                  std::cout << "NO";
                  i = n;
                  j = m;
                  break;
              }else {
                  std::cout << "NO";
                  i = n;
                  j = m;
                  break;
              }
              
          }
      }*/
}
