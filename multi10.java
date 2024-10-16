class Marvellous
{
    public void Display(int no)
    {
        try
        {
            int i = 0;
            for(i = 1; i < 10; i++)
            {
                System.out.println(i*no);
                Thread.sleep(1000);
            }
        }
        catch(Exception obj)
        {}
    }
}

class Demo extends Thread
{
    public Marvallous obj;

    public Demo(Marvellous ref)
    {
        this.obj = ref;
    }

    public void run()
    {
        obj.Display(5);
    }
}

class Hello extends Thread
{
    public Marvallous obj;

    public Demo(Marvellous ref)
    {
        this.obj = ref;
    }

    public Marvallous obj;

    public Demo(Marvellous ref)
    {
        this.obj = ref;
    }
}

class multi10
{
    public static void main(String Args[])
    {
        Marvallous mobj = new Marvallous();
        Demo dobj = new Demo();
        Hello hobj = new Hello();

        dobj.start();
        hobj.start();
    }
}