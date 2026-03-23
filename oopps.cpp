#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
    public:
    int marks1,marks2,marks3;
    
    void inputDetails(){
        cout<<"\n ENTER ROLL NO.,NAME,MARKS1,MARKS2,MARKS3";
        cin>>roll>>name>>marks1>>marks2>>marks3;
    }
    int calculateTotal(){
        return (marks1+marks2+marks3);
    }
    void displayDetails(){
        cout<<"\n Name: "<<name<<"\n ROLL NO. "<<roll<<"\n Marks1: "<<marks1<<"\n Marks2: "<<marks2<<"\n Marks3: "<<marks3;
        cout<<"\n TOTAL: "<<calculateTotal();
    }
};

int main(){
    Student s1,s2;
    s1.inputDetails();
    s1.displayDetails();
    s2.inputDetails();
    s2.marks2=23;
    s2.displayDetails();
    return 0;
}