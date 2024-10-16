class Base
{
    public int A,B;
    public void Fun()
    {   System.out.println("inside Base fun");  }
    public void Gun()
    {   System.out.println("inside Base gun");  }
    public void Sun()
    {   System.out.println("inside Base sun");  }
    public void Run()
    {   System.out.println("inside Base run");  }
}

class Derived extends Base          // class Derived: public base
{
    public int X,Y;
    public void Gun()
    {   System.out.println("Inside Derived gun");   }
    public void Run()
    {   System.out.println("Inside Derived run");   }
    public void Mun()
    {   System.out.println("Inside Derived mun");   }
}

class RMD
{
    public static void main(String A[])
    {
        Base bobj = new Derived();
        bobj.Fun();
        bobj.Gun();
        bobj.Sun();
        bobj.Run();
        bobj.Mun();
    }
}
