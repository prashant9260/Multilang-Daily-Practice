#include<stdio.h>

void Display()
{
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
        printf("%d\t",i);
    }

    printf("\n");
}

int main()
{
    Display();

    return 0;
}