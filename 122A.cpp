#include <iostream>

int main(){
    int integer;
    std::cin >> integer;

    if(integer % 4 == 0 || integer % 7 == 0 || integer % 47 == 0 || integer % 74 == 0 || integer % 447 == 0 || integer % 474 == 0 || integer % 744 == 0 || integer % 747 == 0 || integer % 777 == 0 || integer % 77 == 0 || integer % 44 == 0){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
    return 0;
}