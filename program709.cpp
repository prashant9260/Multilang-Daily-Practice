    #include<iostream>
    using namespace std;

    int SumDigit(int iNo)
    {
        static int  iSum = 0;
        
        if(iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            SumDigit(iSum / 10);
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