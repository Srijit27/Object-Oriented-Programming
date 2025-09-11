#include <iostream>
using namespace std;
class DriverClass
{
    private:
    int a, b;
    public:
    DriverClass()
    {
        a=0;
        b=0;
    }
    DriverClass(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"A:"<<a<<" and B:"<<b<<endl;
    }
    DriverClass(DriverClass &obj)
    {
        a=obj.a;
        b=obj.b;
    }
    void Add(DriverClass obj)
    {
        a=a+obj.a;
        b=b+obj.b;
    }
    ~DriverClass()
    {
        cout<<"Destructor invoked"<<endl;
    }
};
int main()
{
    DriverClass ob1(10,20);
    ob1.display();
    DriverClass ob2(ob1);
    ob2.display();
    ob1.Add(ob2);
    ob1.display();
}