    #include<iostream>
    using namespace std;

    void DisplayDigit(int iNo)
    {
        
        if(iNo != 0)
        {
            cout<<iNo<<"\n";
            DisplayDigit(iNo/10);
            cout<<iNo<<"\n";
        }  
    } 
    

    int main()
    {
        int iValue = 0;
        cout<<"Enter number: ";
        cin>> iValue;

        DisplayDigit(iValue);

        return 0;
    }