#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = iNo;

    while(iCnt >= 1)
    {
        cout<<iCnt<<"\t";
        iCnt--;
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