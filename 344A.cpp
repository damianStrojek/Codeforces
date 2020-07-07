#include <iostream>

int main(){
    int rows;
    std::cin >> rows;
    std::string magnets[rows];

    for(int i = 0; i < rows; i++){
        std::cin >> magnets[i];
    }

    int groups = 1;

    for(int i = 0; i < rows; i++){
        if(i - 1 >= 0){
            if(magnets[i-1][1] == magnets[i][0]){
                groups++;
            }
        }
    }

    std::cout << groups;

    return 0;
}