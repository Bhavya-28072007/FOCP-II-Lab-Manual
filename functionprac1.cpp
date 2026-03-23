// Write a function:
// void findMinMax(int arr[], int size, int &minVal, int &maxVal);
// Input Format:
// First line: Integer N
// Second line: N space-separated integers
// Output Format:
// Print minimum and maximum value.

#include<iostream>
using namespace std;
void findMinMax(int arr[], int size, int &minVal, int &maxVal){
    int max=arr[0];
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
     minVal = min;
    maxVal = max;
    cout<<"MAXIMUM VALUE IS: "<<maxVal<<endl;
    cout<<"MINIMUM VALUE IS: "<<minVal<<endl;
}

int main(){
    int size;
    cout<<"ENTER SIZE OF THE ARRAY";
    cin>>size;
     int arr[size];
    cout<<"enter array elements";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int minVal,maxVal;
    findMinMax(arr,size,minVal,maxVal);
    return 0;

}
