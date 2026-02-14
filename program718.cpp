#include<iostream>
#include<stdio.h>
using namespace std;

int StrlenX(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        StrlenX(str);
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = StrlenX(Arr);
    
    printf("Streng length is : %d",iRet);
    
    return 0;
}