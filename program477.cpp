#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr; 
        int iSize;

    ArrayX(int no);
    ~ArrayX();
    void Accept();
    int Addition();
    void Display();
    int Maximum();
    int Frequency(int);

};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside constructor...\n";
    iSize = no;
    Arr = new int[iSize];
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside destructor...\n";
    delete [] Arr;
}

void ArrayX :: Accept()
{
    int iCnt = 0;

    cout<<"Enter the elements : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

int ArrayX :: Addition()
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

void ArrayX :: Display()
{
    int iCnt = 0;
    cout<<"Elements of the array are : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }

    cout<<"\n";
}

int ArrayX :: Maximum()
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    
    return iMax;
}

int ArrayX :: Frequency(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}


int main()
{
    int iValue = 0;

    cout<<"ENter the number of elements : \n";
    cin>>iValue;
    
    ArrayX *aobj = new ArrayX(iValue);

    aobj->Accept();
    aobj->Display();

    cout<<"Summation of all elements :"<<aobj->Addition()<<"\n";
    cout<<"Maximum number is : "<aobj->Maximum()<<"\n";
    cout<<"Frequency is : "<<aobj->Frequency(11)<<"\n";

    delete aobj;
    
    return 0;
}