#include <iostream>
#include <stdio.h>
#define ll long long
#define ld long double

int main(){
    ld n, m , a;
    ll output;
    std::cin >> n >> m >> a;

    ld horizontal = m / a; // 1
    ld vertical = n / a; // 1

    ll horizontalLL = (ll)horizontal; // 1
    ll verticalLL = (ll)vertical; // 1

    if(horizontalLL < horizontal){
        horizontalLL++;
    }
    if(verticalLL < vertical){
        verticalLL++;
    }

    output = horizontalLL * verticalLL;

    std::cout << output;
    return 0;
}