import java.io.*;
import java.util.*;

class program603
{
    public static void main(String A[]) throws Exception
    {
        String Header = null;

        byte key = 0x11;

        int iRet = 0;
        int i = 0, j = 0;

        byte Buffer[] = new byte[1024];

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder: ");
        String FolderName = sobj.nextLine();

        System.out.println("Enter the name of packed file: ");
        String PackName = sobj.nextLine();

        File fobj = new File(FolderName);

        if((fobj.exists()) && fobj.isDirectory())
        {
            File PackObj = new File(PackName);

            PackObj.createNewFile();

            FileOutputStream foobj = new FileOutputStream(PackObj);

            FileInputStream fiobj = null;

            System.out.println("Folder is present");

            File fArr[] = fobj.listFiles();

            
        }

    }
}