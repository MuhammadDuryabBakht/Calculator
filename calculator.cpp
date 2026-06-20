#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter 1st number: ";
    cin>>x;
    cout<<"Enter 2st number: ";
    cin>>y;
    char op;
    cout<<"Enter Arithmetic opreation you want to perfrom: ";
    cin>>op;
    switch(op){
        case('+'):
        cout<<"Addition of "<<x<<" and "<<y<<" is: "<<x+y;
        break;
        case('-'):
        cout<<"Subtraction of "<<x<<" and "<<y<<" is: "<<x-y;
        break;
        case('*'):
        cout<<"Product of "<<x<<" and "<<y<<" is: "<<x*y;
        break;
        case('/'):
        cout<<"Division of "<<x<<" and "<<y<<" is: "<<x/y;
        break;
    }
    return 0;
}