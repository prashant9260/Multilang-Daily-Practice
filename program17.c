/*
Algorithm:
1. Start
2. Accept a number from user (iValue)
3. Pass the number to CheckEvenOdd function
4. Inside function:
   - If number % 2 == 0 return true
   - Else return false
5. If returned value is true
      Print "Even number"
   Else
      Print "Odd number"
6. End
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    return ((iNo % 2) == 0);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n",iValue);
    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }

    return 0;
}
