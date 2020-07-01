#include <iostream>

int main(){
    int kroki = 0, point;
    std::cin >> point;

    while(point > 0){
        if(point >= 5){
            kroki++;
            point -= 5;
        }
        else if(point == 4){
            kroki ++;
            point -= 4;
        }
        else if(point == 3){
            kroki ++;
            point -= 3;
        }
        else if(point == 2){
            kroki++;
            point -= 2;
        }
        else if(point == 1){
            kroki++;
            point -= 1;
        }
    }

    std::cout << kroki;

    return 0;
}