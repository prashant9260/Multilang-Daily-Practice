#include<iostream>
using namespace std;

int CountDigit(int iNo)
{
    static int  iCount = 0;
    
    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
        CountDigit(iNo);
    }  
    
    return iCount;
}

int main()
{
    int iValue = 0;
    cout<<"Enter number: ";
    cin>> iValue;

    int iRet = CountDigit(iValue);
    cout<<"Number of digits are : "<<iRet<<"\n";

    return 0;
}