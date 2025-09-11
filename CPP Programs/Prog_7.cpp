#include <iostream>
using namespace std;

class Student
{
    private:
    string student_name;
    int roll_no;
    public: 
    void accept()
    {
        cout<<"Enter the name of the student:";
        cin>>ws; //consume any existing whitespace
        getline(cin,student_name);
        cout<<"Enter the roll no:";
        cin>>roll_no;
        cin.ignore();
        cout<<endl;
    }
    void display()
    {
        cout<<"Student name is:"<<student_name<<endl;
        cout<<"Student roll no is:"<<roll_no<<endl;
        cout<<endl;
    }
};
int main()
{   //array of objects
    Student s[2];
    int i;
    cout<<"\t-:Using array of Objects:-"<<endl;
    for(i=0;i<2;i++)
    {
        cout<<"Enter the information of student "<<(i+1)<<" :-"<<endl;
        s[i].accept();
    }
    for(i=0;i<2;i++)
    {
        cout<<"Details of student "<<(i+1)<<" :-"<<endl;
        s[i].display();
    }
    //array of pointers
    Student *p[2];
    cout<<"\t-:Using array of pointers:-"<<endl;
    for(i=0;i<2;i++)
    {
        p[i]=new Student();
        cout<<"Enter the information of student "<<(i+1)<<" :-"<<endl;
        p[i]->accept();
    }
    for(i=0;i<2;i++)
    {
        cout<<"Details of student "<<(i+1)<<" :-"<<endl;
        p[i]->display();
    }
}
