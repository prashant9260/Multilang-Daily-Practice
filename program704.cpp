    #include<iostream>
    using namespace std;

    int CountDigit(int iNo)
    {
        static int  iCount = 0;
        
        if(iNo != 0)
        {
            iCount++;
            cout<<iNo<<"\n";
            CountDigit(iNo/10);
        }  
        
        return iCount;
    }

    int main()
    {
        int iValue = 0;
        cout<<"Enter number: ";
        cin>> iValue;

        int iRet = CountDigit(iValue);
        //cout<<"Number of digits are : "<<iRet<<"\n";

        return 0;
    }