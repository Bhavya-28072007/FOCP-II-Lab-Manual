// Overload the function area() for:
// • Circle (radius)
// • Rectangle (length, breadth)
// • Triangle (base, height)
// Input Format:
// Choice
// Required parameters
// Output Format:
// Area of the selected shape

#include<iostream>
using namespace std;

void area(float radius){
    float area = 3.14*radius*radius;
    cout<<"THE AREA OF THE CIRCLE IS: "<<area<<endl;
}
void area ( float length,float breadth){
    float area = length * breadth;
    cout<<"THE AREA OF THE RECTANGLE IS: "<<area<<endl;
}
void area(double base , double height){
    float area = 0.5*base*height;
    cout<<"THE AREA OF THE TRAINGLE IS "<<area<<endl;
}
int main(){
    int choice;
    cout<<"enter the figure number - 1-CIRCLE,2-RECTANGLE,3-TRAINGLE to find the area"<<endl;
    cin>>choice;
    if(choice==1){
        float rad;
        cout<<"ENTER RADIUS";
        cin>>rad;
        area(rad);
    }
    else if (choice==2){
        float length,breadth;
        cout<<"ENTER LENGTH AND BREADTH";
        cin>>length>>breadth;
        area(length,breadth);
    }
    else{
        double base,height;
        cout<<"enter base and height";
        cin>>base>>height;
        area(base,height);
    }
    return 0;
    
}