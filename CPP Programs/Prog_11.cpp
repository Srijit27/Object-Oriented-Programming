#include <iostream>
using namespace std;
class Array
{
    int **arr,row,col;
    public:
    Array(int r, int c)
    {
        row=r;
        col=c;
        int i,j;
        arr=new int*[row];
        for(i=0;i<row;i++)
        {
            arr[i]=new int[col];
        }
        cout<<"Enter the array elements:-"<<endl;
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
                cin>>arr[i][j];
    }
    Array(Array &ob)
    {
        int i,j;
        row=ob.row;
        col=ob.col;
        arr=new int*[row];
        for(i=0;i<row;i++)
        {
            arr[i]=new int[col];
        }
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
                arr[i][j]=ob.arr[i][j];
                
    }
    void add(Array ob)
    {
        int i,j;
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
                arr[i][j]=arr[i][j]+ob.arr[i][j];
    }
    void display()
    {
        cout<<"Array elements are as follows:-"<<endl;
        int i,j;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    Array ob1(3,3);
    ob1.display();
    Array ob2(ob1);
    ob2.display();
    ob1.add(ob2);
    ob1.display();
}