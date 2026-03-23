// //Make class:

// 👉 Employee

// private: salary

// public: name

// function:

// setSalary

// display

#include<iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    string name;

    void setSalary(int a){
        salary=a; 
    }
    void display(){
        cout<<name<<" "<<salary;
    }
};
int main(){
    Employee s1;
    s1.setSalary(1000);
    s1.name="BHAVYA";
    s1.display();
    return 0;
}