/*
    iRow: 4 
    iCol: 4
    Output:
            a   b   c   d
            a   b   c   d
            a   b   c   d
            a   b   c   d
       
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;
        char ch = '\0';

        for(i = 1; i <= iRow; i++)
        {            
            for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
            {
               if((i % 2) == 0)
               {
                    System.out.printf("%d\t",j);
               }
               else
               {
                    System.out.printf("%c\t",ch);
               }
            }
            System.out.println();
        }
    }
}
class program182
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