#include<iostream>
using namespace std;

double Addition(double No1, double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    double i = 0.0, j = 0.0;
    double Ret = 0;

    cout<<"Enter first number : \n";
    cin>>i;

    cout<<"Enter secound number : \n";
    cin>>2;

    Ret = Addition(i,j);

    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}