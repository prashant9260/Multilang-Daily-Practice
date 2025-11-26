#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequecyCalculate(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    IPTR iptr = NULL;

    printf("Enter the number of elements \n");
    scanf("%d",&iLength);

    //step 1 to allocate the memory
    iptr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the values: \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    //step 2 use the memory
    iRet = FrequecyCalculate(iptr, iLength);     
    printf("frequency of 11 is: %d\n",iRet);

    //step 3: free the memory
    free(iptr);
    

    return 0;          
}