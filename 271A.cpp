#include <bits/stdc++.h>
#include <string>

int main(){
    int y;
    std::cin >> y;

    while(true){
        y += 1;                  //1989
        int a = y / 1000;        // 1
        int b = y / 100 % 10;    // 9
        int c = y / 10 % 10;     // 8
        int d = y % 10;          // 9

        if(a != b && b != c && c != d && a != c && a != d && b != d){
            break;
        }
    }

    std::cout << y;

    return 0;
}