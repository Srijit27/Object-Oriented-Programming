#include <iostream>
using namespace std;
class Employee
{
    string name,desig;
    float sal;
    public:
    void input()
    {
        cout<<"Enter the Employee name:";
        cin>>name;
        cout<<"Enter the Employee designation:";
        cin>>desig;
        cout<<"Enter the Employee salary:";
        cin>>sal;
    }
    void display()
    {
        cout<<"Employee name:"<<name<<endl;
        cout<<"Employee designation:"<<desig<<endl;
        cout<<"Employee salary:"<<sal<<endl;
    }
    friend class Employer;
};
class Employer
{
    public:
    void hike(Employee &ob)
    {
        if(ob.sal>5000)
            ob.sal=ob.sal+1500;
    }  
};
int main()
{
    Employee e1,e2,e3;
    Employer s; //friend class object will be used to gain access to the private data members of Employee class
    cout<<"Enter the details of first Employee:-"<<endl;
    e1.input();
    cout<<endl;
    cout<<"Enter the details of second Employee:-"<<endl;
    e2.input();
    cout<<endl;
    cout<<"Enter the details of third Employee:-"<<endl;
    e3.input();
    cout<<endl;
    s.hike(e1);
    s.hike(e2);
    s.hike(e3);
    cout<<"Employee details are as follows:-"<<endl;
    e1.display();
    cout<<endl;
    e2.display();
    cout<<endl;
    e3.display();
    cout<<endl;
}