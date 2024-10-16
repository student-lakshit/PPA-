import java.io.*;
import java.util.*;

class AgeInvalid extends Exception
{

}

class user
{
    try
    {
        public static void main(String A[])
        {
            Scanner sobj = new Scanner(System.in);

            System.out.println("please enter your age : ");
            int Age = sobj.nextInt();

            if(Age < 18)
            {
                throw new AgeInvalid();
            }
            else
            {
                System.out.println("you succesfully loged in site");
            }
        }
    }
    catch(AgeInvalid obj)
    {
        System.out.println("Age is invalid to register for this size");
    }
}
