#include <iostream>

int main(){
    std::string p;
    std::cin >> p;
    for(int i = 0; i < p.length(); i++){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            std::cout << "YES";
            break;
        }
        else if(i == p.length() - 1){
            std::cout << "NO";
            break;
        }
    }
    return 0;
}