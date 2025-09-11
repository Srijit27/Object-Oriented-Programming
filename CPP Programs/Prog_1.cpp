#include <iostream>
using namespace std;

void swap_value(int, int);
void swap_address(int *, int *);
void swap_reference(int &, int &);

int main()
{
    int a,b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    swap_value(a,b);
    cout<<"Pass by value result:-"<<endl;
    cout<<"New value of a:"<<a<<" New value of b:"<<b<<endl;
    swap_address(&a,&b);
    cout<<"Pass by address result:-"<<endl;
    cout<<"New value of a:"<<a<<" New value of b:"<<b<<endl;
    swap_reference(a,b);
    cout<<"Pass by reference result:-"<<endl;
    cout<<"New value of a:"<<a<<" New value of b:"<<b<<endl;
}

void swap_value(int a, int b)
{
    int t=a;
    a=b;
    b=t;
}

void swap_address(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

void swap_reference(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}