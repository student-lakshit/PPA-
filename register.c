#include<stdio.h>

void Marvallous()
{
    int i = 11;
    register int j = 21;
    register int k;

    printf("%d",k);


}
int main ()
{
    printf("demonstration of auto storage class...\n");
    Marvallous();


    return 0;
}