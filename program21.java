/*
Algorithm:
1. Start
2. Create class Marvellous
3. Define Display() method
   - Print "Jay Ganesh..." four times
4. Create main class program21
5. In main method:
   - Create object of Marvellous class
   - Call Display() method
6. End
*/

// Best approach

class Marvellous
{
    public void Display()
    {
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
    }
}

class program21
{
    public static void main(String A[])
    {      
        Marvellous mobj = new Marvellous();
        mobj.Display();      
    }
}
