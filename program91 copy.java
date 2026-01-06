import java.util.*;

class Digit
{
   public int SumDigit(int iNo)
   {
      int iDigit = 0, iSum = 0;

      while(iNo != 0)
      {
         iDigit = iNo % 10;
         iSum = iSum + iDigit;
         iNo = iNo / 10;
      }

      return iSum;
   }
}

class program91
{
   public static void main(String A[])
   {
      int iValue = 0, iRet = 0;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter no: ");
      iValue = sobj.nextInt();

      Digit dobj = new Digit();

      iRet = dobj.SumDigit(iValue);
      System.out.println("Addition of digit: "+iRet);

      sobj = null;
      dobj = null;

      System.gc();
   }
}