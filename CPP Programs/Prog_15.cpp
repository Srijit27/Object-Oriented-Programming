#include <iostream>
using namespace std;
class Distance
{
    int feet,inches;
    public:
    Distance(int feet=0, int inches=0)
    {
        this->feet=feet;
        this->inches=inches;
    }
    friend istream &operator>>(istream &in, Distance &ob)
    {
        in>>ob.feet>>ob.inches;
    }
    friend ostream &operator<<(ostream &out, Distance &ob)
    {
        out<<"Feet:"<<ob.feet<<" Inches:"<<ob.inches<<endl;
    }
    Distance operator++() //Pre-fix operation
    {
        Distance t;
        t.feet=++feet;
        t.inches=++inches;
        return t;
    }
    Distance operator++(int) //Post-fix operation
    {
        Distance t;
        t.feet=feet++;
        t.inches=inches++;
        return t;
    }
};
int main()
{
    Distance v1,v2,v3,v4;
    cout<<"Enter the first distance:-"<<endl;
    cin>>v1;
    cout<<"Enter the second distance:-"<<endl;
    cin>>v2;
    cout<<"Value of Object 1 before pre-increment:"<<v1<<endl;
    cout<<"Value of Object 2 before post-increment:"<<v2<<endl;
    v3=++v1;
    v4=v2++;
    cout<<"Value of Object 1 (pre-increment):"<<v1<<endl;
    cout<<"Value of Object 2 (pre-increment):"<<v2<<endl;
    cout<<"Value of Object 3 (post-increment):"<<v3<<endl;
    cout<<"Value of Object 4 (post-increment):"<<v4<<endl;
}