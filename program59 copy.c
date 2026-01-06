#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt  = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }


    for(iCnt = 2, bFlag = true; iCnt <= (iNo/2); iCnt++) ///new convention by denies 
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;              //optimazation
        }
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

   if(bRet == true)
   {
        printf("%d is prime number\n",iValue);
   }
   else
   {
        printf("%d is not a prime number\n",iValue);
   }

    return 0;
}

//time compexity : for prime = n/2;
//time compexity : for non prime = either 1 or 2