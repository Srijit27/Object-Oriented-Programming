#include <iostream>
using namespace std;
int val(int x)
{
    return x*x;
}
int main()
{
    int x=3;
    int y=val(x);
    cout<<"Final value is:"<<val(val(y))<<endl;
    return 0;
}

