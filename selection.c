#include<stdio.h>

int main()
{
    int No = 0;
    int Ans = 0;

    printf("enter number : \n");
    scanf("%d", &No);

    Ans = No % 2;

    if(Ans == 0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
    return 0;
}