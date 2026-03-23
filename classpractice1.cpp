// Q7. A furniture showroom wants to develop a simple C++ program to manage details of
// different types of tables. Each table can be purchased in different ways:
// • Some customers buy a table by specifying only the price (default table)
// • Some customers specify the material and price
// • Some customers specify material, price, and number of legs (custom table)
// Design a class Table that uses constructor overloading to handle all three cases:
// 1. A default constructor that sets material as "Wood", price as 5000, and legs as 4
// 2. A constructor that accepts material and price
// 3. A constructor that accepts material, price, and number of legs
// Create three objects using different constructors and display the details of each table.

#include<iostream>
using namespace std;
class Table{
    public:
    string material;
    int price;
    int legs;
    Table(){
        material = "wood";
        price=5000;
        legs=4;
    }
    Table(string a,int b){
         material=a;
        price=b;
    }
    Table(string a,int b,int c){
        material=a;
        price=b;
        legs=c;
    }
        void display(){
        cout << material << " " << price << " " << legs << endl;
    }

};
int main(){
    Table s1;
    Table s2("STEEL",3000);
    Table s3("PLASTIC",4000,5);
    s1.display();
    s2.display();
    s3.display();
    return 0;




}