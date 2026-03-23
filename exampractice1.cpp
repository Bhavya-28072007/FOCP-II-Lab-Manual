// // // // // //Input two numbers and print:
// // // // // sum

// // // // // difference

// // // // // product

// // // // // remainder

// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int num1,num2;
// // // //     cout<<"enter number 1 and number 2"<<endl;
// // // //     cin>>num1>>num2;
// // // //     cout<<"sum= "<<num1+num2<<endl;
// // // //      cout<<"subtract= "<<num1-num2<<endl;
// // // //       cout<<"product= "<<num1*num2<<endl;
// // // //        cout<<"remainder= "<<num1%num2<<endl;
// // // //        if(num1>100){
// // // //         cout<<"num 1 is greater than 100";
// // // //        }
// // // //        if(num1>10 && num1<50){
// // // //         cout<<"num 1 is b/w 10 and 50";
// // // //        }
// // // //        return 0;

// // // // }

// // // //Check positive / negative / zero

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     cout<<"ENTER ANY NUMBER OF UR CHOICE"<<endl;
// // //     int number;
// // //     cin>>number;
// // //     if(number>0){
// // //         cout<<"POSITIVE NUMBER";
// // //     }
// // //     else if(number==0){
// // //         cout<<"ZERO";
// // //     }
// // //     else{
// // //         cout<<"NEGETIVE NUMBER";
// // //     }
// // //     return 0;
// // // }

// // //Check largest of two numbers
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     cout<<"ENTER ANY TWO NUMBERS OF UR CHOICE";
// //     int num1,num2;
// //     cin>>num1>>num2;
// //     if(num1>num2){
// //         cout<<num1<<" is greater";
// //     }
// //     else if(num1==num2){
// //         cout<<" BOTH ARE EQUAL";
// //     }
// //     else{
// //         cout<<num2<<" is greater";
// //     }
// //     return 0;
// // }

// //even-odd
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"ENTER ANY NUMBER OF UR CHOICE";
//     int number;
//     cin>>number;
//     if(number%2==0){
//         cout<<"EVEN";
//     }
//     else{
//         cout<<" ODD";
//     }
//     return 0;
// }

//SIMPLE CALCULATOR USING SWITCH CASE
#include<iostream>
using namespace std;
int main(){
    char sign;
    cout<<"ENTER + , - , * , / , % TO PERFORM OPERATIONS"<<endl;
    cin>>sign;
    cout<<"ENTER TWO NUMBERS OF UR CHOICE"<<endl;
    int num1,num2;
    cin>>num1>>num2;
    switch(sign){
        case '+':
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
        cout<<num1/num2;
        break;
        case '%':
        cout<<num1%num2;
        break;
        default:
        cout<<"TYPE A CHARACTER";
    }
    return 0;
}