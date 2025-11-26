#include<stdio.h>

void Display()
{
    int i = 0;
    i = 1;

    while( i <= 5)
    {
        printf("%d\t",i);
         i++;
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}