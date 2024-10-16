abstract class Demo{
    public int Addition(int A, int B)
    {       return A+B; }
    public int Substraction(int A, int B)
    {      return A-B;  }
    public abstract int Multiplication(int A, int B);
}

class Marvallous extends Demo
{
    public int Division(int A, int B)
    {   return A/B; }
    public int Multiplication(int A, int B)
    {   return A*B; }
}
class hello
{
    public static void main(String jhfg[])
    {
        //Demo obj = new Demo();
        Marvallous mobj = new Marvallous();

        System.out.println(mobj.Addition(10,11));
        System.out.println(mobj.Substraction(10,11));
        System.out.println(mobj.Division(10,11));
        System.out.println(mobj.Multiplication(10,11));

    }
}