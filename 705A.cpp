#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            std::cout << "I hate ";
        }
        else{
            std::cout << "I love ";
        }

        if(i != n - 1){
            std::cout << "that ";
        }
        else{
            std::cout << "it ";
        }
    }

    

    return 0;
}