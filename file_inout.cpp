#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file("student.txt",ios::in | ios::out);
    if(!file){
        cout<<"FILE NOT FOUND";
        return 0;
    }
    int id,marks;
    string name;
    int search_id=102;
    while(file>>id>>name>>marks){
        if(id == search_id){
            cout<<"old marks: "<<marks<<endl;
            file.seekp(-4,ios::cur);
            marks=90;
            file<<marks;
            cout<<"Marks Updated";
            break;
        }
    }
    file.close();
}