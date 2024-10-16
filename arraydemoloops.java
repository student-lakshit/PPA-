class arraydemoloops
{
    public static void main (String Args[])
    {
        int Arr[] = {10,20,30,40,50};
        int i = 0;

        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);
        }

        
        i = 0;
        while(i < Arr.length)
        {
            System.out.println(Arr[i]);
            i++;
        }

    }
}