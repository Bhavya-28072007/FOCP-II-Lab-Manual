#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("bhavya.txt");
    fout<<"10 "<<"20 "<<"30 ";
    fout.close();
    ifstream fin("bhavya.txt");
    int a,b,c;
    fin>>a>>b>>c;
    cout<<a+b+c;
    fin.close();
}