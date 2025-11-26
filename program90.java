import java.util.*;

class Digit
{
   public void DisplayDigit(int iNo)
   {
      int iDigit = 0;;

      while(iNo != 0)
      {
         iDigit = iDigit % 10;
         System.out.println(iDigit);
         iNo = iNo / 10;
      }
   }
}

class program90
{
   public static void main(String A[])
   {
      int iValue = 0;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter no: ");
      iValue = sobj.nextInt();

      Digit dobj = new Digit();

      dobj.DisplayDigit(iValue);

      sobj = null;
      dobj = null;

      System.gc();
   }
}