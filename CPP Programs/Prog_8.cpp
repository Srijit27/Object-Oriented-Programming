#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,x,n;
    float sum=0.0f;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of n:";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum=sum+pow(x,i);
    }
    cout<<"Sum is:"<<sum<<endl;
}