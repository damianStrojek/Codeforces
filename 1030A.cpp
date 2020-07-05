#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int people[n];
    for(int i = 0; i < n; i++){
        std::cin >> people[i];
        if(people[i] > 0){
            std::cout << "HARD";
            exit(0);
        }
    }

    std::cout << "EASY";

    return 0;
}