//14/11

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0, iCnt = 0;
    int *iptr = NULL;

    printf("Enter the number of elements \n");
    scanf("%d",&iLength);

    //step 1 to allocate the memory
    iptr = (int *)malloc(iLength * sizeof(int));

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
    //call to the function which contains business logic
    //Fun(iPtr,iLength);

    //step 3: free the memory

    free(iptr);
    

    return 0;          
}