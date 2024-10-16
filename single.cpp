#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base()
        {   
            cout<<"Inside base constructor\n";
            A = 11;
            B = 21;
        }
        ~Base()
        {   cout<<"Inside Base destructor\n";  }
        void Fun ()
        {   cout<<"Inside Base fun\n";  }
        
};

class Derived : public Base
{
    public:
        int X,Y;
        Derived()
        {   
            cout<<"Inside derived constructor\n"; 
            X = 51;
            Y = 101;
        }
        ~Derived()
        {   cout<<"Inside derived destructor\n";   }
        void Gun()
        {   cout<<"Inside derived gun\n";   }

};

int main ()
{
    Derived dobj;   //constructor of base constructor of derived
    cout<<"Size of object is : "<<sizeof(dobj)<<"\n";   //16

    cout<<dobj.A<<"\n"; //11
    cout<<dobj.B<<"\n"; //21
    cout<<dobj.X<<"\n"; //51
    cout<<dobj.Y<<"\n"; //101

    dobj.Fun(); //base fun
    dobj.Gun(); //derived gun

    return 0;
}