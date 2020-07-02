#include <iostream>

int main(){
    std::string word1, word2;
    int n = 0;
    std::cin >> word1 >> word2;

    for(int i = 0, j = word2.length() - 1; i < word1.length(), j >= 0; i++, j--){
        if(word1[i] == word2[j]){
            n++;
        }
        else{
            n = 0;
        }
    }

    if(n == word1.length()){
        std::cout << "YES";
    }
    else{
        std::cout << "NO";
    }
    return 0;
}