#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[] = {'H','e','l','l','o','\0'};

    printf("%s\n",Arr);
    printf("%ld\n",sizeof(Arr));
    printf("%d\n",strlen(Arr));

    return 0;    
}