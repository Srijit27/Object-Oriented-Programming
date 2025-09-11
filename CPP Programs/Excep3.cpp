#include <iostream>
using namespace std;
class TooHot 
{//Custom Exception:TooHot
    public:
    void showMessage() 
    {
        cout<<"Exception: Temperature is too hot!"<<endl;
    }
};

class TooCold 
{//Custom Exception:TooCold
    public:
    void showMessage() 
    {
        cout<<"Exception: Temperature is too cold!"<<endl;
    }
};
void checkTemperature(int temp) 
{// Function to check temperature
    if(temp>40) 
    {
        throw TooHot();
    }
    else if(temp<20) 
    {
        throw TooCold();
    } 
    else 
    {
        cout<<"Temperature is normal:"<<temp<<" degrees"<<endl;
    }
}
int main() 
{
    int temp;
    cout<<"Enter the temperature:";
    cin>>temp;
    try{
        checkTemperature(temp);
    }catch(TooHot h){
        h.showMessage();
    }catch(TooCold c){
        c.showMessage();
    }
}
