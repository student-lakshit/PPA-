import java.util.Scanner;

class exception3
{
    public static void main(String Args[])
    {        
        try
        {
            System.out.println("Inside try bloack");
        
        Scanner sobj = new Scanner(System.in);
        int Arr[] = {10, 20, 30, 40, 50};

        System.out.println("Enter the index number : ");
        int i = sobj.nextInt();

        System.out.println(Arr[i]);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Inside catch block");
        }
        finally{
            System.out.println("Inside finally block");
        }
        System.out.println("end of code");
    }
}