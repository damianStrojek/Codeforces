#include <bits/stdc++.h>

int main(){
    int n , m;
    std::cin >> n >> m;
    int f[m];
    for(int i = 0; i < m; i++){
        std::cin >> f[i];
    }

    std::sort(f, f+m);
    int least = f[n-1] - f[0];
    for(int i = 1; i <= m - n; i++){
        if(f[i+n-1] - f[i] < least){
            least = f[i+n-1] - f[i];
        }
    }

    std::cout << least;

    return 0;
}