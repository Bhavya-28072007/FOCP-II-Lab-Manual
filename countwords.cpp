#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("bhavya.txt");
    string line;
    int sum=0;
    while(fin>>line){
            cout<<line<<endl;
            sum++;
    }
    cout<<sum;

    fin.close();
}