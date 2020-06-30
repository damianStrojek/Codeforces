#include <iostream>

int main(){
    int limak, bob, i = 0;
    std::cin >> limak >> bob;

    while(limak <= bob){
        limak = limak * 3;
        bob = bob * 2;
        i++;
    }

    std::cout << i;

    return 0;
}