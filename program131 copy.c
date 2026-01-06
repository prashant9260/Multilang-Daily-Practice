#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{ 
    int iCnt = 0, iCount = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iCount = iCount + Arr[iCnt];
    }

    return iCount / iSize;   
}


int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0f;

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

    fRet = Average(ptr,iLength);
    printf("average is: %2f\n",fRet);

    free(ptr);

    return 0;
}
