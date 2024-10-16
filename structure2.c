#include<stdio.h>

struct Marvallous
{
    int no;
    float f;
    int i;
};

int main ()
{
    struct Marvallous mobj;

    struct Marvallous *ptr =  &mobj;

    ptr->no = 11;
    ptr->f = 90.99;
    ptr->i = 21;

    printf("%d\n",ptr->no);
    printf("%d\n",mobj.no);

    printf("%d\n",sizeof(mobj));   //12
    
    return 0;
}