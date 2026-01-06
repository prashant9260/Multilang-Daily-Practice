#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr; 
        int iSize;

    ArrayX(int no)
    {
        cout<<"Inside constructor...\n";
        iSize = no;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        cout<<"Inside destructor...\n";
        delete [] Arr;
    }

    void Accept()
    {
        int iCnt = 0;

        cout<<"Enter the elements : \n";

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }

    int Addition()
    {
        int iSum = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }

    void Display()
    {
        int iCnt = 0;
        cout<<"Elements of the array are : \n";

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\t";
        }

        cout<<"\n";
    }

};

int main()
{
    int iValue = 0;

    cout<<"ENter the number of elements : \n";
    cin>>iValue;
    
    ArrayX *aobj = new ArrayX(iValue);

    aobj->Accept();
    aobj->Display();

    cout<<"Summation of all elements :"<<aobj->Addition()<<"\n";

    delete aobj;
    
    return 0;
}