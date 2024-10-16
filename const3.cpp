#include<iostream>
using namespace std;

class Demo
{
    public:
        int X, Y;
        Demo()
        {
            X = 10;
            Y = 20;
        }
        void fun()     // non constant func
        {
            cout<<"Inside fun\n";
            X++;
            Y++;
        }
        void gun() const    //constant func
        {
            cout<<"Inside gun\n";
            //X++;
            //Y++;
        }
};

int main ()
{
    Demo obj1;
    const Demo obj2;

    obj1.fun(); //normal obj normal function
    obj1.gun(); //normal obj constant function

    obj2.fun(); //const obj normal func
    obj2.gun(); //const obj const func
    
    return 0;
}