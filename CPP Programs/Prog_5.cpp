#include <iostream>
using namespace std;

struct Student
{
    string student_name;
    int roll_no,m1,m2,m3,total;
    char branch_name[50];
    public: 
    void accept();
    void display();
};

void Student::accept()
{
    cout<<"Enter the name of the student:";
    cin>>ws; //consume any existing whitespace
    getline(cin,student_name);
    cout<<"Enter the roll no:";
    cin>>roll_no;
    cin.ignore(); //clear the newline after integer input
    cout<<"Enter the branch:";
    cin.getline(branch_name,50); //cin.getline() is used to accept multi string statements including whitespaces
    cout<<"Enter the marks of subject 1:";
    cin>>m1;
    cout<<"Enter the marks of subject 2:";
    cin>>m2;
    cout<<"Enter the marks of subject 3:";
    cin>>m3;
    cout<<"\n";
}

void Student::display()
{
    cout<<"Student name is:"<<student_name<<endl;
    cout<<"Student roll no is:"<<roll_no<<endl;
    cout<<"Student branch is:"<<branch_name<<endl;
    total=m1+m2+m3;
    cout<<"Total marks is:"<<total<<endl;
    cout<<endl;
}

int main()
{
    int i,max_total;
    struct Student ob[3];
    for(i=0;i<3;i++)
    {
        cout<<"Enter the information of student "<<(i+1)<<" :-"<<endl;
        ob[i].accept();
    }
    for(i=0;i<3;i++)
    {
        cout<<"Details of student "<<(i+1)<<" :-"<<endl;
        ob[i].display();
    }
    max_total=ob[0].total>ob[1].total?((ob[0].total>ob[2].total)?ob[0].total:ob[2].total):((ob[1].total>ob[2].total)?ob[1].total:ob[2].total);
    cout<<"Top scorer is:"<<max_total<<endl;
}
// a>b?((a>c)?a:c):((b>c)?b:c);