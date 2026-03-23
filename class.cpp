// #include<iostream>
// using namespace std;
// class Car{
//     string brand;
//     int make_year;
//     string colour;
//     public:
//     string car_type;
//     void display()
//     {
//         cout<<"\n BRAND OF THE CAR: "<<brand;
//         cout<<"\n MAKE_YEAR OF THE CAR: "<<make_year;
//         cout<<"\n CAR TYPE: "<<car_type;
//     }
//     void car_entry()
//     {
//         cout<<"\n ENTER BRAND,MAKE,CAR TYPE,COLOUR";
//         cin>>brand>>make_year>>car_type>>colour;}
//     };
    
// int main(){
//     Car c1;
//     c1.car_entry();
//     c1.car_type="Hatch back";
//     c1.display();
//     return 0;
// }


#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
    int reg;
    public:
    int m1,m2,m3;
    void display()
    {
        cout<<"\n ROLL NO. "<<roll;
        cout<<"\n NAME "<<name;
        cout<<"\n REGSITRATION "<<reg;
    }
    void student_details()
    {
        cout<<"ENTER ROLL NO.,NAME,REGSITRATION";
        cin>>roll>>name>>reg;
    }
    void Marks_entry(){
        cout<<"\n marks1 "<<m1;
         cout<<"\n marks2 "<<m2;
          cout<<"\n marks3 "<<m3;
    }
    void Display_result(){
        cout<<"ENTER MARKS1,MARKS2,MARKS3";
        cin>>m1>>m2>>m3;
    }
};

int main()
{
    Student c1;
    c1.student_details();
    c1.display();
    c2.Display_result();
    c2.m2=23;
    c2.display();
    return 0;
}
