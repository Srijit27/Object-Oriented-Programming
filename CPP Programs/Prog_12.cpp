#include <iostream>
using namespace std;
class Order
{
    string name;
    public:
    Order(string name)
    {
        this->name=name;
        cout<<name<<" has been created"<<endl;
    }
    ~Order()
    {
        cout<<name<<" has been destroyed"<<endl;
    }
};
Order ob6("Global Non-Static Object");
void func()
{
    Order ob3("Function Non-Static Object");
    static Order ob4("Function Static Object");
}
static Order ob5("Global Static Object");
int main()
{
    Order ob1("Main Non-Static Object");
    Order("Nameless");
    {
        Order ob2("Block of main");
    }
    func();
}