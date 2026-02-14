#include<iostream>
using namespace std;

void Display(int iNo)
{
    while(iNo >= 1)
    {
        cout<<iNo<<"\t";
        iNo--;
    }

    cout<<"\n";
}

int main()
{
    int iValue = 0;
    cout<<"Enter number: ";
    cin>> iValue;

    return 0;
}