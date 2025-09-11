#include <iostream>
using namespace std;

int Area(int);
int Area(int, int);
float Area(float);

int Area(int x)
{
    return x*x;
}
int Area(int a, int b)
{
    return a*b;
}
float Area(float p)
{
    return p*p;
}

int main()
{
    cout<<"Area 1 is:"<<Area(5)<<endl;
    cout<<"Area 2 is:"<<Area(4,5)<<endl;
    cout<<"Area 3 is:"<<Area(4.2f)<<endl; //4.2f indicates that 4.2 is a float literal here
}