        #include<iostream>
        using namespace std;

        int SumFactors(int iNo)
        {
            static int iCnt = 1;
            static int iSum = 0;
            int iDigit = 0;

            if( iCnt <= (iNo/2))
            {
                if(iNo % iCnt == 0)
                {
                    iSum = iSum + iCnt;                
                }
                iCnt++;
                SumFactors(iNo);
            }

            return iSum;
        }

        int main()                  
        {
            int iValue = 0;
            cout<<"Enter number: ";
            cin>> iValue;

            int iRet = SumFactors(iValue);
            cout<<"Summation of Factors is : "<<iRet<<"\n";

            return 0;
        }
