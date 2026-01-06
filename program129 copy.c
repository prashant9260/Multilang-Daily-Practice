#include<stdio.h>
#include<stdlib.h>

int CountEvent(int Arr[], int iSize)
{ 
    int iCnt = 0, iEven = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven++;
        }
    }

    return iEven;
}


int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));   
    if(NULL  == ptr)            //industrial way of coding           
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEvent(ptr,iLength);
    printf("summation of even number is: %d\n",iRet);

    free(ptr);

    return 0;
}
