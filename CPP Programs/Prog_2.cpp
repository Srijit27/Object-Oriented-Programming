#include <iostream>
using namespace std;

struct complex
{
    int real,img;
    public:
    void input()
    {
        cout<<"Enter the real part"<<endl;
        cin>>real;
        cout<<"Enter the imaginary part"<<endl;
        cin>>img;
    }
    public:
    void display();
};

void complex::display()
{
    if(img>0)
        cout<<"Complex number is:"<<real<<"+"<<img<<"i"<<endl;
    else 
        cout<<"Complex number is:"<<real<<img<<"i"<<endl;
}

int main()
{
    struct complex ob;
    ob.input();
    ob.display();
}

