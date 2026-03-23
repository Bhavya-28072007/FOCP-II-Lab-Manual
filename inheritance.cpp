#include<iostream>
using namespace std;
class Person{
    string name;int age;
    public:
    void display()
    {
        cout<<"\n name= "<<name<<"\n age= "<<age;
    }
    Person(){
        cout<<"\n Person default";name="";age=18;
    }
    Person(string name,int age){
        cout<<"\n Person parameterized";
        this->name=name;this->age=age;}
    };
class Student:public Person{
    string rollno;
    public:
    Student(){
        cout<<"\n Student Default";
        rollno="25CSU111";
    }
    Student(string rno,string nm,int ag):Person(nm,ag)
    {
        cout<<"\n student parameterized";
        rollno=rno;
    }
    void display_student(){
        display();cout<<"\n rollno = "<<rollno;
    }
};

int main(){
    Student s1("25CSU000","ABCD",17),s2;
    s1.display_student();
    s2.display_student();
    return 0;
}