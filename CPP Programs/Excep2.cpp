#include <iostream>
using namespace std;
class ArrayIndexOutOfBounds //custom exception class 
{
    public:
    int index;
    ArrayIndexOutOfBounds(int i) 
    {
        index=i;
    }
    void showMessage() 
    {
        cout<<"Exception: Array index " <<index<<" is out of bounds!"<<endl;
    }
};

void accessElement(int arr[], int size, int index) 
{// Function to access array elements and throw exception if index is invalid
    if (index < 0 || index >= size) 
        throw ArrayIndexOutOfBounds(index);
    cout<<"Element at index "<<index<<": "<<arr[index]<<endl;
}

int main() 
{
    int s = 5;
    int arr[s] = {10, 20, 30, 40, 50};
    int index;
    cout<<"Enter the index to access:";
    cin>>index;
    try{
        accessElement(arr,s,index);
    }catch(ArrayIndexOutOfBounds e) 
    {
        e.showMessage();
    }
}
