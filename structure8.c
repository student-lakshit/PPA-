#include<stdio.h>

struct Demo
{
    int data;             //4
    struct Hello            //4
    {
        int no;
        float f;
    }hobj;
};


int main ()
{
    struct Demo dobj;
    dobj.data = 11;
    dobj.hobj.no = 21;
    dobj.hobj.f = 90.00;

    return 0;
}