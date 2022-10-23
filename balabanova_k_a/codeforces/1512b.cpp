#include <iostream>
#include <vector>
//не понимаю, в чем проблема с последним вводом
int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t--) {
        const int nmax = 10;
        std::vector < std::vector <char>> arr(nmax, std::vector <char>(nmax));
        int n;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> arr[i][j];
            }
        }
        int xone = -1, xtwo = -1, yone = -1, ytwo = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == '*' && xone == -1) {
                    yone = i;
                    xone = j;
                }
                if (arr[i][j] == '*' && xone != j) {
                    ytwo = i;
                    xtwo = j;
                }
            }
        }
        if (n > 2){
            if (yone != ytwo && xone != xtwo) {
                arr[ytwo][xone] = '*';
                arr[yone][xtwo] = '*';
            }
            if (yone == ytwo && yone != 0) {
                arr[0][xone] = '*';
                arr[0][xtwo] = '*';
            }
            if (yone == ytwo && yone == 0) {
                arr[1][xone] = '*';
                arr[1][xtwo] = '*';
            }
            if (xone == xtwo && xone == 0) {
                arr[yone][n - 1] = '*';
                arr[ytwo][n - 1] = '*';
            }
            if (xone == xtwo && xone != 0) {
                arr[yone][0] = '*';
                arr[ytwo][0] = '*';
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    arr[i][j] = '*';
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << arr[i][j];
            }
            std::cout << std::endl;
        }
        //std::cout << xone << "   " << yone;
        //std::cout << std::endl << xtwo << "  " << ytwo;
    }
    return 0;
}
