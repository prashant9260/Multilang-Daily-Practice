#include<iostream>
#include<stdio.h>
using namespace std;

void StrDisplay(char *str)
{
    if(*str != '\0')
    {  
        StrDisplay(str+1);
        cout<<*str<<"\n";
    }

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    StrDisplay(Arr);
    
    return 0;
}