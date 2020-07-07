#include <bits/stdc++.h>

int main(){
    int maximum = 0, a, b, c, value[6];
    std::cin >> a >> b >> c;
    
    value[0] = a * b + c;
    value[1] = a * (b + c);
    value[2] = a * b * c;
    value[3] = a + b * c;
    value[4] = (a + b) * c;
    value[5] = a + b + c;

    for(int i = 0; i < 6; i++){
        if(value[i] > maximum){
            maximum = value[i];
        }
    }

    std::cout << maximum;

    return 0;
}