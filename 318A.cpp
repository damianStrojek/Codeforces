#include <bits/stdc++.h>

int main(){

    long long n, k;
    std::cin >> n >> k;
    if(k <= (n+1)/2){
        std::cout << k * 2 - 1;
    }
    else{
        std::cout << (k - (n+1) / 2) * 2;
    }

    //BRUTE FORCE
    /*long long int k, n, i, m = 0;
    std::cin >> n >> k;
    long long int liczby[n];

    for(i = 1; i < n + 1; i++){
        if(i % 2 != 0){
            liczby[m] = i;
            m++;
        }
    }

    for(i = 1; i < n + 1; i++){
        if(i % 2 == 0){
            liczby[m] = i;
            m++;
        }
    }

    std::cout << liczby[k-1];*/

    return 0;
}