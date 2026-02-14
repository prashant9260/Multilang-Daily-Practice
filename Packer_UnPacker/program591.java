import java.io.*;
import java.util.*;

class program591
{
    public static void main(String args[]) throws Exception 
    {
        int iRet = 0;
        int i = 0 , j = 0;
        byte Buffer[] = new byte[1024];
        byte Key = 0x11;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of folder : ");
        String FolderName = sobj.nextLine();

        System.out.println("Enter the name of packed file : ");
        String PackName = sobj.nextLine();
        
        File fobj = new File(FolderName);

        if ((fobj.exists()) && (fobj.isDirectory()))
        {
            FileInputStream fiobj = null;

            File Packobj = new File(PackName);
            Packobj.createNewFile();
            FileOutputStream foobj = new FileOutputStream(Packobj);

            System.out.println("Folder is present...");

            File fArr[] = fobj.listFiles();
            System.out.println("Number of files in the folder are : "+fArr.length);

            for(i = 0; i<fArr.length;i++)
            {
                fiobj = new FileInputStream(fArr[i]);

                System.out.println("File Name : "+fArr[i].getName()+"\tFile Size : "+fArr[i].length()+" bytes");
                
                if(fArr[i].getName().endsWith(".txt"))
                {
                    while ((iRet = fiobj.read(Buffer))!= -1)
                    {
                        // Encryption logic
                        for(j = 0; j<iRet;j++)
                        {
                            Buffer[j] = (byte)(Buffer[j]^Key);
                        }
                        foobj.write(Buffer,0,iRet);
                    }
                    fiobj.close();
                }
            }
            foobj.close();
        }
        else
        {
            System.out.println("Their is no such folder...");
        }
        sobj.close();
    }
}