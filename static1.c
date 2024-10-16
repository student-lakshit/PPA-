#include<stdio.h>

void Marvallous()
{
    static int x = 10;
    x++;
    printf("value of x is : %d\n",x);

}
int main ()
{
    printf("demonstration of auto storage class...\n");
    Marvallous();
    Marvallous();
    Marvallous();


    return 0;
}