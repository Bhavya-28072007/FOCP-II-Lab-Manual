// // #include<iostream>
// // using namespace std;
// // void welcome(string name){
// //     cout<<"WELCOME "<<name;
// // }
// // int sum(int num1,int num2){
// //     int add = num1+num2;
// //     return add;
// // }
// // float sum(float num1,float num2){
// //     float add = num1+num2;
// //     return add;
// // }
// // double sum(double num1,double num2){
// //     double add = num1+num2;
// //     return add;
// // }
// // int main(){
// //     welcome("BHAVYA");
// //     cout<<"\n"<<sum(23,10);
// //     cout<<"\n"<<sum(23.05,0.5);
// //     cout<<"\n"<<sum(23.050989,23.45678);
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // void welcome(string name = "User"){
// //     cout<<"\n Welcome"<<name;}
// // int main(){
// //     welcome();
// //     welcome("Section A");
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// void welcome(string name = "GUEST"){
//     cout<<"\n WELCOME "<<name;
// }
// int main(){
//     welcome("BHAVYA MITTAL");
//     return 0;
// }


//calculating avg,min and max
#include<iostream>
using namespace std;
void computePerformace(int m[],int n)
{
    int i;
    int min=m[0],max=m[0],sum=0;
    float avg = 0;
    for(int i=1;i<n;i++)
    {
        if(m[i]>max){
            max=m[i];
        }
        if(min>m[i]){
            min=m[i];
        }
        sum=sum+m[i];
    }
    avg=(float)sum/n;
    cout<<max;
    cout<<"\n"<<min;
    cout<<"\n"<<avg;
}
int main(){
    int marks[10]={22,33,44,55,66,77,88,99,12,13};
    computePerformace(marks,10);
    

    return 0;
}