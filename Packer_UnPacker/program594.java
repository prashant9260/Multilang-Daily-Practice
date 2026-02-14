import java.io.*;
import java.util.*;

class program594
{
    public static void main(String args[]) throws Exception 
    {
        String str = "Marvellous Infosystem pune";

        System.out.println("Data: "+str);
        System.out.println("Length: "+str.length());

        for(int i = str.length(); i < 100; i++)
        {
            str = str + " ";
        }

        System.out.println("Data : "+str);
        System.out.println("Length : "+str.length());        
    }
}