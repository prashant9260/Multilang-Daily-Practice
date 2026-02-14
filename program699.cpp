#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo >= 1)
    {
        cout<<iNo<<"\t";
        Display(iNo-1);        
        cout<<iNo<<"\t";
    }    
}

int main()
{
    int iValue = 0;
    cout<<"Enter number: ";
    cin>> iValue;

    Display(iValue);
    cout<<"\n";

    return 0;
}