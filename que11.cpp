// A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
// expenses and apply a discount accordingly.
#include<iostream>
using namespace std;
int main(){
    cout<<"ENTER THE NUMBER OF ITEMS U BOUGHT";
    int items;
    cin>>items;
    cout<<"ENTER THE TOTAL AMOUNT";
    int total;
    cin>>total;
    float discount = (float)total*0.1;
    if(items>1000)
    {
        float bill = (float)total - discount;
        cout<<"THE BILL IS "<<bill;
    }
    else{
        cout<<"YOUR BILL IS "<<total;
    }
    return 0;
}