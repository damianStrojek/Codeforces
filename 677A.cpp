#include <iostream>

int main(){
    int n, h, width = 0;
    std::cin >> n >> h;
    int friends[n];
    for(int i = 0; i < n; i++){
        std::cin >> friends[i];
    }

    for(int i = 0; i < n; i++){
        if(friends[i] > h){
            width += 2;
        }
        else{
            width += 1;
        }
    }

    std::cout << width;

    return 0;
}