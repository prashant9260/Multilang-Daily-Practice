import java.io.*;
import java.util.*;

class program599
{
    public static void main(String args[]) throws Exception 
    {
        String str = "python java data structure";

        String Arr[] = str.split(" ");
        
        System.out.println(Arr.length);

        for(int i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }
    }
}