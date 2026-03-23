// // // // // //square pattern
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     for(int i=0;i<4;i++)
// // // // //     {
// // // // //         for(int j=0;j<4;j++){
// // // // //             cout<<" * ";
// // // // //         }
// // // // //         cout<<endl;
// // // // //     }
// // // // //     return 0;
// // // // // }

// // // // //RIGHT TRIANGLE
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     for(int i=0;i<4;i++){
// // // //         for(int j=0;j<=i;j++){
// // // //             cout<<" * ";
// // // //         }
// // // //         cout<<endl;
// // // //     }
// // // //     return 0;
// // // // }

// // // //INVERTED TRIANGLE
// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     for(int i=0;i<4;i++){
// // //         for(int j=4-i;j>=0;j--){
// // //             cout<<" * ";
// // //         }
// // //         cout<<endl;
// // //     }
// // //     return 0;
// // // }

// // //PYRAMID
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     for(int i =1;i<5;i++){
// //         for(int j=1;j<5;j++){
// //             if(j<(5-i)){
// //                 cout<<" ";
// //             }
// //             else{
// //                 cout<<" * ";
// //             }
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }

// //INVERTED PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//                 if(j<=i-1){
//                     cout<<" ";
//                 }
//                 else{
//                     cout<<" * ";
//                 }
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//FULL PYRAMID

#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            if(j<n-i+1){
                cout<<" ";
            }
            else{
                cout<<" * ";
            }
        } 
        cout<<endl;
    }
    for(int i=n+1;i<=(2*n-1);i++){
        for(int j = 1;j<=n;j++){
            if(j<=(i-n)){
                cout<<" ";
            }
            else{
                cout<<" * ";
            }
        }
        cout<<endl;
    }
    return 0;
}