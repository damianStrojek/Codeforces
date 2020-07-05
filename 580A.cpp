#include <bits/stdc++.h>

int main(){
    int n, segment = 1, max = 1;
    std::cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++){
        std::cin >> a[i];
    }

    for(int i = 1; i < n; i++){
       if(a[i] >= a[i-1]){
           segment++;
           if(segment > max){
               max = segment;
           }
       }
       else{
           segment = 1;
       }
    }

    std::cout << max;

    return 0;
}