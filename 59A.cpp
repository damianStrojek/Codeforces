#include <iostream>

int main(){
    int lower = 0, upper = 0;
    std::string word, output = "";
    std::cin >> word;
    output = word;
    
    for(int i = 0; i < word.length(); i++){
        if(word[i] >= 97 && word[i] <= 122){
            lower++;
        }
        else if(word[i] >= 65 && word[i] <= 90){
            upper++;
        }
    }

    if(lower > upper){
        for(int i = 0; i < word.length(); i++){
            output[i] = tolower(word[i]);
        }
    }
    else if(upper > lower){
        for(int i = 0; i < word.length(); i++){
            output[i] = toupper(word[i]);
        }
    }
    else{
        for(int i = 0; i < word.length(); i++){
            output[i] = tolower(word[i]);
        }
    }
    
    std::cout << output;
    return 0;
}