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