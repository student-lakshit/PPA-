class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base comstructor");
    }
    public void Fun()
    {
        System.out.println("inside Base fun");
    }
}

class Derived extends Base          // class Derived: public base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived Destructor");
    }
    void Gun()
    {
        System.out.println("Inside Derived gun");
    }
}

class single
{
    public static void main(String A[])
    {
        Derived dobj = new Derived();
        dobj.Fun();
        dobj.Gun();
    }
}
