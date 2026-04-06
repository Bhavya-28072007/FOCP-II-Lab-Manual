#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int width;
    
    Rectangle(){
        length=0;width=0;
    }
    Rectangle(int l,int w){
        length=l;width=w;
    }
    void display(){
        cout<<"\n Length = "<<length;
        cout<<"\n width = "<<width;
    }
};
void area(Rectangle obj){
    int area=obj.length*obj.width;
    cout<<"\n Area = "<<area;
}
int main(){
    Rectangle r1,r2(23,45);
    r1.display();
    area(r1);
    r2.display();
    area(r2);
    return 0;
}