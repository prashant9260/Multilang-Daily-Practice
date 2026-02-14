import java.util.Scanner;

class program619
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iCount1 = 0, iCount0 = 0;

        System.out.println("Enter the number : ");
        int no = sobj.nextInt();

        while(no != 0)
        {
            int iDigit = no % 2;
            System.out.print(iDigit);
            no = no / 2;
        }
    }
}