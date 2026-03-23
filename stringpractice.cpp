//PALINDROME STRING
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"ENTER A WORD OF UR CHOICE";
    getline(cin,s);
    string rev = s;
    reverse(s.begin(),s.end());
    if(s==rev){
        cout<<"PALINDROME";
    }
    else{
        cout<<"NOT A PALINDROME";
    }
    return 0;

    

}