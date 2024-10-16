#include<stdio.h>

int x = 101;

void Marvallous()
{
    int i = 21;
    int no = 51;

    printf("from main Marvallous of no is : %d\n",no);
    printf("from main Marvallous of i is : %d\n",i);
    printf("from main Marvallous of x is : %d\n",x);

}

int main ()
{
    int no = 11;

    printf("from main value of no is : %d\n",no);
    printf("from main value of x is : %d\n",x);

    Marvallous();


    return 0;
}