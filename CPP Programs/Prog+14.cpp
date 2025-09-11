#include <iostream>
using namespace std;
class Student
{
    public:
    static int count; //no memory is allocated here, compiler knows this is merely a static member
    string student_name;
    int roll_no;
    Student(string n, int r)
    {
        student_name=n;
        roll_no=r;
        count++;
    }
    static int get_count()
    {
        return count;
    }
    void display()
    {
        cout<<"Student name:"<<student_name<<" Roll No:"<<roll_no<<endl;
    }
};
int Student::count=0; //global instance for every object, initialised only once 
int main()
{
    Student s1("Srijit", 214);
    s1.display();
    Student s2("Aryan",213);
    s2.display();
    Student s3("Kabya",207);
    s3.display();
    cout<<"Total no of students:"<<Student::get_count()<<endl;
}