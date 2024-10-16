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

class DerivedX extends Base
{
    public P,Q;
    public DerivedX()
    {
        System.out.println("Derived constructor");
    }
    public void Sun()
    {
        System.out.println("Inside DeivedX sun");
    }
}
class hirarchal
{
    public static void main(String A[])
    {
        Derived dobj1 = new Derived();

        DerivedX dobj2 = new DerivedX();
    }
}
