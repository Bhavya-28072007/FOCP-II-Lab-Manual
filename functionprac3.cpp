// Implement the following functions:
// int sumArray(int arr[], int size);
// double average(int arr[], int size);
// bool contains(int arr[], int size, int key);
// Input Format:
// N
// N space-separated integers
// Key
// Output Format:
// Print sum
// Print average
// Print YES or NO for key presence

#include<iostream>
using namespace std;
int sumArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
double average(int arr[],int size){
    double sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    double avg = sum/size;
    return avg;
}
bool contains(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]=key){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int size;
    cout<<"ENTER THE SIZE OF THE ARRAY";
    cin>>size;
    int arr[size];
    cout<<"ENTER THE VALUES OF THE ARRAY";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<sumArray(arr,size)<<endl;
    cout<<average(arr,size)<<endl;
    cout<<contains(arr,size,12)<<endl;
    return 0;
}