#include <iostream>
using namespace std;

class complex
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
    void add(complex );
};

void complex::display()
{
    if(img>0)
        cout<<"Complex number is:"<<real<<" + "<<img<<"i"<<endl;
    else 
        cout<<"Complex number is:"<<real<<img<<"i"<<endl;
}

void complex::add(complex c)
{
    real=real+c.real;
    img=img+c.img;
}

int main()
{
    complex c1,c2;
    cout<<"The first complex no:-"<<endl;
    c1.input();
    c1.display();
    cout<<"The second complex no:-"<<endl;
    c2.input();
    c2.display();
    cout<<"The addition of two complex nos:-"<<endl;
    c1.add(c2);
    c1.display();
}


