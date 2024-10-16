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
class DerivedX : public Derived
{
    public:
        int P;
        DerivedX()
        {   cout<<"INside derived constructor\n";
        P = 111;    }
        ~DerivedX()
        {   cout<<"Inside derived destructor\n"; }
        void Sun()
        {   cout<<"inside Derived sun\n";    }
};

int main ()
{
    DerivedX dobj;   //constructor of base constructor of derived
    cout<<"Size of object is : "<<sizeof(dobj)<<"\n";   //20

    cout<<dobj.A<<"\n"; //11
    cout<<dobj.B<<"\n"; //21
    cout<<dobj.X<<"\n"; //51
    cout<<dobj.Y<<"\n"; //101
    cout<<dobj.P<<"\n"; //111


    dobj.Fun(); //base fun
    dobj.Gun(); //derived gun
    dobj.Sun(); //derivedX sun

    return 0;
}