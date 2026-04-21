#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("bhavyaabc.txt");
    if(!fin.is_open()){
        cout<<"\n issue with the file";
        return 0;
    }
    string line;
    while(fin>>line){
            cout<<line<<endl;
    }
    fin.close();
}