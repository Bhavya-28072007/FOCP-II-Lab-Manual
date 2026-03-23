// A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a
//leap year or not.
#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER A YEAR WHICH U WANT TO CHECK WHETHER IT IS A LEAP YEAR OR NOT";
    int year;
    cin>>year;
    if(year%4==0)
    {
        cout<<"LEAP YEAR";
    }
    else{
        cout<<"NOT A LEAP YEAR";
    }
    return 0;
}