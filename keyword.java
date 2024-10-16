class base
{
    public int A,B;
    public Base()
    {
        System.out.println("Inisde base constructor");
        this.A = 10;
        this.B = 20;
    }
    public void fun()
    {
        System.out.println("Inisde fun of base");
    }
}

class Derived extends Base
{
    public int X,Y;
    public Derived(int i, int j)
    {
        super();
        System.out.println("Inisde derived constructor");
        this.X = i;
        this.Y = j;
    }
    public void gun()
    {
        System.out.println("Inised gun of derived");
        super.fun();
        System.out.println("Value of A : "+super.A);
        System.out.println("Value of X : "+this.X);
        
    }
}

class keyword
{
    public static void main(String Age[])
    {
        Derived dobj = new Derived(11,21);
        dobj.gun();
    }
}