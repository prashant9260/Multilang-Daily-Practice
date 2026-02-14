#include<iostream>
#include<stdio.h>
using namespace std;

int CountCaptial(char *str)
{
    int iCountCaptial = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCaptial++;
        }
        str++;
    }

    return iCountCaptial;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCaptial(Arr);
    
    printf("Captial count is %d: ",iRet);
    
    return 0;
}