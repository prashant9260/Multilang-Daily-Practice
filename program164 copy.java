/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/ 

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0, j = 0;

        for(i = 1; i <= iCol; i++)
        {
            for(j = 1; j <= iRow; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

class program164
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the numbers of Rows: ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the number of Colums: ");
        iValue2 = sobj.nextInt();

        Pattern pboj = new Pattern();
        pboj.Display(iValue1, iValue2);
    }
}
