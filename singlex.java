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

class singlex
{
    public static void main(String A[])
    {
        Base bobj1 = new Base();        //no casting
        Derived dobj1 = new Derived();  //no casting
        Base bobj2 = new Derived();     //up casting  (A)
        Derived dobj2 = new Base();     //down casting (NA)
    }
}
