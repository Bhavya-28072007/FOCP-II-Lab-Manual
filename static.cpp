#include<iostream>
using namespace std;
class Box{
    private:
    double length;
    double breadth;
    double height;
    static int count;
    public:
    Box(double l=2.0,double b=2.0,double h=2.0){
        cout<<"Box Constructor called."<<endl;
        length=l;
        breadth=b;
        height=h;
        count++;
    }
    double Volume(){
        return length*breadth*height;
    }
    void display(){
        cout<<"\n length "<<length<<"\n breadth "<<breadth<<"\n height "<<height;
        cout<<"\n volume "<<Volume();
        cout<<"\n object count "<<count;
    }
};
int Box::count;
int main(void){
    Box Box1(3.0,3.0,3.0);
    Box1.display();
    Box Box2(3.0,3.0,3.0);
    Box2.display();
    return 0;
}