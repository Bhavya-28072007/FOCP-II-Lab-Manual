#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("bhavya.txt");
    fout<<"Lets try new data"<<endl;
    fout<<"this file is for file handling";
    fout.close();
    cout<<"DATA WRITTEN SUCCESFULLY";
}