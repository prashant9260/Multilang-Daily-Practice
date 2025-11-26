#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

// <O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
           return true;             //not good programming practie
        }
    }
    return false;

}

int main()
{
    int iLength = 0, iCnt = 0,iValue = 0;
    IPTR iptr = NULL;
    bool bRet = false;

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

    printf("Enter the number to search : \n");
    scanf("%d",&iValue);

    //step 2 use the memory
    bRet = LinearSearch(iptr, iLength, iValue);     
    
    if(bRet == true)
    {
        printf("%d is present in the data\n",iValue);
    }
    else
    {
        printf("%d is not present in the data \n",iValue);
    }

    //step 3: free the memory
    free(iptr);    

    return 0;          
}

