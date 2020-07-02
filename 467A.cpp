#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int p[n], q[n];
    for(int i = 0; i < n; i++){
        std::cin >> p[i] >> q[i];
    }

    int ile = 0;

    for(int i = 0; i < n; i++){
        if(q[i] - p[i] >= 2){
            ile++;
        }
    }

    std::cout << ile;

    return 0;
}