/*
Algorithm: Check Even or Odd

1. Start
2. Accept number from user (iNo)
3. Find remainder using iNo % 2
4. If remainder is 0
      Return true (number is even)
   Else
      Return false (number is odd)
5. Display result
6. End
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

    printf("Result is : %d\n", bRet);

    return 0;
}
