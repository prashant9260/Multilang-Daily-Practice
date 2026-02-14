import java.io.*;
import java.util.*;

class program588
{
    public static void main(String A[]) throws Exception
    {
        String str = "hello";

        byte Arr[] = str.getBytes();

        byte key = 0x11;

        System.out.println("Original data : "+str);

        //Encryption processs
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = (byte)(Arr[i] ^ key);
        }
        
        String output = new String(Arr);

        System.out.println("Encrypted data : "+output);

        //Decryption processs
        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = (byte)(Arr[i] ^ key);
        }
                                                                                                                         
        String out = new String(Arr);

        System.out.println("Decrypted data : "+out);
    }
}