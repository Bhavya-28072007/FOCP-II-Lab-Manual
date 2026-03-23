#include<iostream>
using namespace std;
class Student{
    int rno;
    string name;
    float total;
    public:
    Student();
    Student(int,string,float);
    void display();
};
Student::Student(){
    rno=111;
    name=" ";
    total=0;
}
Student::Student(int R,string n,float m){
    rno = R;
    name=n;
    total=m;
}
