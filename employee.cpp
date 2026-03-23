#include<iostream>
using namespace std;

class Employee {
public:
 Employee(string name, double salary) {
 this->name = name;
 this->salary = salary;
 totalEmployees++;
 }
 static int getTotalEmployees() {
 return totalEmployees;
 }
 void displayInfo() {
 cout << "Name: " << name << ", Salary: $" << salary << endl;
 }
private:
 string name;
 double salary;
 static int totalEmployees;
};
int Employee::totalEmployees = 0;
int main() {
 Employee emp1("Alice", 50000);
 Employee emp2("Bob", 60000);
 cout << "Total Employees: " << Employee::getTotalEmployees() <<
endl;
emp1.displayInfo();
 emp2.displayInfo();
 return 0;
}