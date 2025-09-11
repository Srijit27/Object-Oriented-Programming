#include <iostream>
using namespace std;
class Array
{
    int *arr,len;
    public:
    Array()
    {
        arr=NULL;
        len=0;
    }
    Array(int l)
    {
        int i;
        len=l;
        arr=new int[len];
        for(i=0;i<len;i++)
        {
            cout<<"Enter the element "<<(i+1)<<":";
            cin>>arr[i];
        }
    }
    Array(Array &ob)
    {
        int i;
        len=ob.len;
        arr=new int[len];
        for(i=0;i<len;i++)
        {
            arr[i]=ob.arr[i];
        }
    }
    void add(Array ob)
    {
        int i;
        for(i=0;i<len;i++)
            arr[i]=arr[i]+ob.arr[i];
    }
    void display()
    {
        cout<<"Array elements are as follows:-"<<endl;
        int i;
        for(i=0;i<len;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    Array ob1(5);
    ob1.display();
    Array ob2(ob1);
    ob2.display();
    ob1.add(ob2);
    ob1.display();
}