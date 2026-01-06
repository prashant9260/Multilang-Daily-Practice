#include<stdio.h>

void StrcatX(char *src, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter source string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter destinate string : \n");
    scanf(" %[^'\n']s",Brr);

    StrcatX(Arr,Brr);

    printf("Updated string is : %s\n",Brr);

    return 0;
}