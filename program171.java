/*
    Input: a    b   c   d   e   f

       
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        int i = 96;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.printf("%d\t",i+iCnt);
        }
        System.out.println();
    }
}
class program171
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the Frequency: ");
        iValue = sobj.nextInt();

        Pattern pboj = new Pattern();
        pboj.Display(iValue);
    }
}