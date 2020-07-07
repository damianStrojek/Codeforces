#include <bits/stdc++.h>

int main(){
    long long n, a;
    std::cin >> n;

    if(n % 2 == 0){
        a = n / 2;
    }
    else{
        a = ((n + 1) / 2) * (-1);
    }
    
    std::cout << a;

    return 0;
}

    /*for(i = 1; i <= n; i++){
        if(i % 2 == 0){
            f += i;
        }
        else{
            f += -1 * i;
        }
        
    }

    for(i = 1; i <= n; i += 2){
        sumaA += -1 * i;
    }
    for(i = 2; i <= n; i += 2){
        sumaB += i;
    }

    std::cout << sumaA + sumaB;
    */