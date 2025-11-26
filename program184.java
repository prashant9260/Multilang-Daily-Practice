/*
    iRow: 6
    iCol: 6
    Output:
           
       
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iRow; i++)
        {            
            for(j = 1; j <= iCol; j++)
            {
                if(i == iRow || (i == 1) || j == 1 || j == iCol)
                {
                    System.out.print("*\t");
                }
                else
                {
                    System.out.print("$\t");
                }
            }
            System.out.println();
        }
    }
}
class program184
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the number of Rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Coumns: ");
        iValue2 = sobj.nextInt();

        Pattern pboj = new Pattern();
        pboj.Display(iValue1,iValue2);
    }
}