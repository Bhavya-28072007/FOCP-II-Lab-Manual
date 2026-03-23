// // //Write a function bool isPrime(int n) that determines whether a given integer is
// // //prime.
// // #include<iostream>
// // using namespace std;
// // bool isPrime(int n){
// //     int flag=0;
// //     for(int i=2;i<=n/2;i++){
// //         if(n%i==0){
// //             flag=1;//it is not prime
// //             break;
// //         }
// //     }
// //     if(flag==0){
// //         return true;
// //     }
// //     else{
// //         return false;
// //     }
// // } 
// // int main(){
// //     cout<<isPrime(12);
// //     return 0;
// // }
// // //true-1 for prime
// // //false-0 for not prime


// //Implement two functions:
// void swapByValue(int a, int b);
// void swapByReference(int &a, int &b);

#include<iostream>
using namespace std;
void swapbyvalue(int a, int b){
    int temp = a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<" b = "<<b<<endl;
}

void swapByReference(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<" b = "<<b<<endl;
}
int main(){
    cout<<"SWAP BY VALUE:"<<endl;
    swapbyvalue(12,13);
    cout<<"SSWAP BY REF.";
    int a=90,b=9;
    swapByReference(a,b);
    return 0;
}