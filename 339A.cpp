/*#include <bits/stdc++.h>

using namespace std;



int main()

{

    char ch[150];

    int i, l, c1=0, c2=0, c3=0;

    gets(ch);

    l = strlen(ch);

    for(i=0; i<l; i++)

    {

        if(ch[i] == '1')

        {

            c1++;

        }

        else if(ch[i] == '2')

        {

            c2++;

        }

        else if(ch[i] == '3')

        {

            c3++;

        }

    }

    for(i=0; i<c1; i++)

    {

        cout << '1';

        if((c2 == 0 && c3 == 0) && i == c1-1)

        {

            cout << endl;

        }

        else

        {

            cout << '+';

        }

    }

    for(i=0; i<c2; i++)

    {

        cout << '2';

        if(i== c2 - 1 && c3 == 0)

        {

            cout << endl;

        }

        else

        {

            cout << '+';

        }

    }

    for(i=0; i<c3; i++)

    {

        cout << '3';

        if(i == c3 - 1)

        {

            cout << endl;

        }

        else

        {

            cout << '+';

        }

    }

    return 0;

}*/

#include <iostream>
#include <string>
#include <bits/stdc++.h>

int main(){
    int a1 = 0, a2 = 0, a3 = 0;
    int i;
    char c[150];
    gets(c);
    int dlugosc = strlen(c);
    for(i = 0; i < dlugosc; i++){
        if(c[i] == '1'){
            a1++;
        }
        else if(c[i] == '2'){
            a2++;
        }
        else if(c[i] == '3'){
            a3++;
        }
    }
    
    for(i = 0; i < a1; i++){
        std::cout << '1';

        if( (a2 == 0 && a3 == 0) && i == a1 - 1){
            std::cout << "\n";
        }
        else{
            std::cout << "+";
        }
    }

    for(i = 0; i < a2; i++){
        std::cout << '2';

        if(a3 == 0 && i == a2 - 1){
            std::cout << "\n";
        }
        else{
            std::cout << "+";
        }
    }

    for(i = 0; i < a3; i++){
        std::cout << '3';

        if(i == a3 - 1){
            std::cout << "\n";
        }
        else
        {
            std::cout << "+";
        }
        
    }

    return 0;
}



/*
int main(){
    std::string dzialanie;
    std::getline(std::cin, dzialanie);
    int dlugosc = dzialanie.length();
    std::string output = "";

    for(int i = 2; i < dlugosc; i++){
        if(dzialanie[i] == 43){
            output += "+";
        }
        else
        {
            if(dzialanie[i-2] > dzialanie[i]){
                std::swap(dzialanie[i-2], dzialanie[i]);
                output += dzialanie[i];
            }
            else
            {
                output+= dzialanie[i];
            }
            
        }
    }

    for(int i = 3; i < dlugosc; i++){
        if(output[i] == 43){
            continue;
        }
        else
        {
            if(output[i-2] > output[i]){
                std::swap(output[i-2], output[i]);
            }
        }
    }

    std::cout << output;

    return 0;
}*/
