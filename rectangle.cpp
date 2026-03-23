#include<iostream>
using namespace std;
class Rectangle{
    float length;
    float width;
    public:
    void inputDimensions(){
        cout<<"LENGTH:";
        cin>>length;
        cout<<"WIDTH";
        cin>>width;
    }
    float calculateArea(){
        return (length*width);
    }
    float calculatePerimeter(){
        return (2*length*width);
    }
    void displayResult(){
        cout<<"AREA: "<<calculateArea();
        cout<<"\nPERIMETER: "<<calculatePerimeter();
    }
};
int main(){
    Rectangle s1;
    s1.inputDimensions();
    s1.displayResult();
    return 0;
}