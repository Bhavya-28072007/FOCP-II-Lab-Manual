// Q9. A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
// solution to classify the symbol.

#include<iostream>
using namespace std;
int main(){
    cout<<"TYPE A LETTER";
    char letter;
    cin>>letter;
    if(letter == 'a'|| letter == 'e' || letter == 'i' || letter == 'o' || letter =='u')
    {
        cout<<"VOWEL";
    }
    else if(letter>='0' && letter<='9'){
        cout<<"NUMBER";
    }
    else{
        cout<<"CONSONANT";
    }
    return 0;

}