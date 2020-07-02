#include <bits/stdc++.h>

int main(){
    std::string caps;
    std::cin >> caps;
    bool lower = true;

    int ile = 0;
    for(int i = 0; i < caps.length(); i++){
        if(caps[i] >= 'A' && caps[i] <= 'Z'){
            ile++;
        }
    }

    for(int i = 1; i < caps.length(); i++){
        if(islower(caps[i])){
            lower = false;
        }
    }

    if(caps[0] >= 'a' && caps[0] <= 'z' && lower){
        for(int i = 0; i < caps.length(); i++){
            if(caps[i] >= 'a' && caps[i] <= 'z'){
                putchar (toupper(caps[i]));
            }
            else if(caps[i] >= 'A' && caps[i] <= 'Z'){
                putchar (tolower(caps[i]));
            }
        }
    }
    else if(ile == caps.length()){
        for(int i = 0; i < caps.length(); i++){
            putchar (tolower(caps[i]));
        }
    }
    else{
        std::cout << caps;
    }

    return 0;
}