#include<iostream>
using namespace std;

template <class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<"Addition of characters : "<<Addition('a','b')<<"\n";
    cout<<"Addition of Intergers : "<<Addition(11,10)<<"\n";
    cout<<"Addition of Floats : "<<Addition(90.6f, 11.5f)<<"\n";
    cout<<"Addition of doubles : "<<Addition(10.43434, 45.543434)<<"\n";

    return 0;
}
