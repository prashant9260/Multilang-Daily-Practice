#include<stdio.h>

void StrlwrX(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);
    
    StrlwrX(Arr);
    printf("Updated strig is : %s\n",Arr);
    
    return 0;
}