#include<iostream>
using namespace std;
 int multiply(int num1,int num2){
    int product = num1*num2;
    return product;
 }
 float multiply(float num1,float num2){
    float product = num1*num2;
    return product;
 }
 double multiply(double num1,double num2){
    double product = num1*num2;
    return product;
 }
 int main(){
    cout<<endl<<multiply(2,2);
    cout<<endl<<multiply(1.2f,1.2f);
    cout<<endl<<multiply(12.22,12.22);
    return 0;
 }
 
 
 