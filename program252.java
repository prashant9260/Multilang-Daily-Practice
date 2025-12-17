// Input : Hello    Output : _ello

import java.util.*;

class StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();

        Arr[0] = '_';

        String temp = new String(Arr);

        return temp;
    }
}

class program252
{
    public static void main(String A[])
    {
        Scanner scanobj = new Scanner(System.in);
        String sRet = null;

        System.out.println("Enter String : ");
        String sobj =scanobj.nextLine();

        StringX strg = new StringX();

        sRet = strg.Update(sobj);

        System.out.println("Updated string is : "+sRet);
    }
}