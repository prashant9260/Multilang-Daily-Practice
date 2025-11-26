#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt  = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;              //optimazation
        }
    }

    if(iCnt > (iNo/2))         //no factors
    {
        return true;
    }
    else                    //at least one factors
    {
        return false;
    }
    
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
//perfect code