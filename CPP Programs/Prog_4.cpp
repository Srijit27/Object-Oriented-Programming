#include <iostream>
using namespace std;

struct student
{
    string student_name;
    int roll_no;
    char branch_name[50];
    public: 
    void accept();
    void display();
};

void student::accept()
{
    cout<<"Enter the name of the student:";
    cin>>ws; //consume any existing whitespace
    getline(cin,student_name);
    cout<<"Enter the roll no:";
    cin>>roll_no;
    cin.ignore(); //clear the newline after integer input
    cout<<"Enter the branch:";
    cin.getline(branch_name,50); //cin.getline() is used to accept multi string statements including whitespaces
    cout<<"\n";
}

void student::display()
{
    cout<<"Student name is:"<<student_name<<endl;
    cout<<"Student roll no is:"<<roll_no<<endl;
    cout<<"Student branch is:"<<branch_name<<endl;
}

int main()
{
    struct student ob;
    ob.accept();
    ob.display();
}