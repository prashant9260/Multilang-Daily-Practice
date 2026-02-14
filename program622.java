import java.util.Scanner;

class program621
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCount = 0;

        System.out.println("Enter the number : ");
        int no = sobj.nextInt();

        while(no != 0)
        {
            int iDigit = no % 2;
            iCount = iCount + iDigit;
            no = no / 2;
        }

        System.out.println("Number of 1s are : "+iCount);
    }
}
/*

        Decimal         Hexadecimal         Binary
        0                   0                0000                   
        1                   2                   0001
        2                   3                   0011
        3                   4 
        4                   5                   0101
        5                   6                   0110
        6                   7 0111
        7                   8 10       
        8                   9
        9                   a
        1                   01001
        11                  b1010
        12                  c1100
        13                  d1101
        14                  e1110
        15                  f1111
*/