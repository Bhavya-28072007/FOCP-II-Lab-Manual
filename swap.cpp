#include<iostream>
using namespace std;
void swap(int num1,int num2){
    int c = num1;
    num1=num2;
    num2=c;
    cout<<"num1 = "<<num1<<" num2= "<<num2;
}
void swap(float num1,float num2){
    float a = num1;
    num1=num2;
    num2=a;
    cout<<"num1 = "<<num1<<" num2= "<<num2;
}
int main(){
    swap(12,14);
    swap(12.2f,14.3f);
    return 0;
}