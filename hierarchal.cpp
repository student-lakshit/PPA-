#include<iostream>
using namespace std;

class Marvellous 
{
    public:
        int C;
        Marvellous()
        {
            C = 30;
            cout<<"Inside Marvallous constructor\n";
        }
        ~Marvellous()
        {   cout<<"Inside marvallous destructor\n"; }
        void Sun()
        {   cout<<"Inside sun of marvallous\n"; }

};

class Demo : public Marvellous
{
    public:
        int A;
        Demo()
        {
            A = 10;
            cout<<"Inside Demo constructor\n";
        }
        ~Demo()
        {   cout<<"inside demo destructor\n";   }
        void Fun ()
        {   cout<<"Inside Fun of Demo\n";   }
};

class Hello : public Marvellous
{
    public:
        int B;
        Hello()
        {
            B = 20;
            cout<<"Inside Hello Constructor\n";
        }
        ~Hello()
        {   cout<<"Inside Demo destructor\n";   }
        void Gun()
        {   cout<<"Inside gun hello\n"; }
};

int main ()
{
   Demo dobj;
   Hello hobj;

    return 0;
}