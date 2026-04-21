#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("bhavya.txt");
    ofstream fout("copy.txt");
    string line;
    while(getline(fin,line)){
        fout<<line<<endl;
    }
    cout<<"FILE COPIED SUCCESFULLY";
    fin.close();
    remove("bhavya.txt");
    fout.close();


}