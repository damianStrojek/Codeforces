#include <bits/stdc++.h>

int main(){
    int n;
    std::cin >> n;
    int gifts[n];
    
    for(int i = 0; i < n; i++){
        std::cin >> gifts[i];
    }

    int a[110];
    for(int i = 0; i < n; i++){
        a[gifts[i]] = i + 1;
    }

    for(int i = 1; i <= n; i++){
        std::cout << a[i] << " ";
    }

    return 0;
}