#include <iostream>

int main(){
    int n;
    std::string games;
    std::cin >> n >> games;
    int anton = 0, danik = 0;
    for(int i = 0; i < n; i++){
        if(games[i] == 'A'){
            anton++;
        }
        else if(games[i] == 'D'){
            danik++;
        }
    }

    if(anton > danik){
        std::cout << "Anton\n";
    }
    else if(danik > anton){
        std::cout << "Danik\n";
    }
    else{
        std::cout << "Friendship\n";
    }

    return 0;
}