#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()  //1000      defination
        {   cout<<"Base Fun\n"; }
        void Gun()  //2000      defination
        {   cout<<"Base gun\n"; }
        void Sun()  //3000      defination
        {   cout<<"Base sun\n"; }
};

class Derived : public Base
{
    public:
        int X,Y;
        void Gun()  //4000      redefination
        {   cout<<"Derived Gun\n";  }
        void Sun()  //5000      redefination
        {   cout<<"Derived Sun\n";  }
        void Run()  //6000      defination
        {   cout<<"Derived Run\n";  }
};

int main ()
{
    Base bobj;
    Derived dobj;

    Base *bp = NULL;
    Derived *dp = NULL;

    bp = &bobj;     //nocasting
    dp = &dobj;     //nocasting

    bp = &dobj;     //upcasting
    dp = &bobj;     //downcsasting  (not allowed)

    return 0;
}