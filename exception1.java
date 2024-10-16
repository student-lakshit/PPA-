import java.util.Scanner;

class exception1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        float No1 = sobj.nextFloat();

        System.out.println("Enter second number : ");
        float No2 = sobj.nextFloat();

        float Ans = No1 / No2;

        System.out.println("Division is : "+Ans);
    }
}