/*
    Algorithm: Check Even or Odd
    Start
    Accept number iNo
    Calculate remainder
    iRem = iNo % 2
    If iRem == 0
    Return true (number is even)
    Else
    Return false (number is odd)
    Display result
    End
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    printf("Result is : %d\n",bRet);

    return 0;
}