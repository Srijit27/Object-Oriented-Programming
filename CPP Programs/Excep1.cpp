#include <iostream>
using namespace std;
void division(int num, int den)
{
    float res=0.0f;
    try{
        if(den==0)
            throw "Division by zero!";
        res=(float)num/den;
        cout<<"Result is:"<<res;
    }catch(const char *c)
    {
        cout<<"Exception caught:"<<c<<endl;
    }
    cout<<endl;
}
int main()
{
    division(10,0);
}