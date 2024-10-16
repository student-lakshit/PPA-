#include<iostream>
#include<stdio.lib>
using namespace std;

class Demo
{
    public:
        int A,B;
        Demo()
        {
            cout<<"Inside constructor\n";
            A = 11;
            B = 21;
        }
        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun function";
        }
};

int main ()
{
    // Demo obj1;

    Demo *p = new Demo;
    //Demo*p = (Demo *)malloc(sizeof(Demo));

    p->Fun();
    
    cout<<p->A<<"\n";
    cout<<p->B<<"\n";

    delete p;
    //free(p);
    return 0;
}