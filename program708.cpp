    #include<iostream>
    using namespace std;

    int SumDigit(int iNo)
    {
        static int  iSum = 0;
        int iDigit = 0;
        
        if(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            SumDigit(iSum);
        }  
        
        return iSum;
    }

    int main()
    {
        int iValue = 0;
        cout<<"Enter number: ";
        cin>> iValue;

        int iRet = SumDigit(iValue);
        cout<<"Sum of digits are : "<<iRet<<"\n";

        return 0;
    }