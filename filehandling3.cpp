#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("bhavya.txt");
    string line;
    while(fin>>line){
            cout<<line<<endl;
    }
    fin.close();
}