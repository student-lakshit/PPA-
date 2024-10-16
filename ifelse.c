#include<stdio.h>

int main ()
{
    int Standard = 0;

    printf("Enter your standard : \n");
    scanf("%d", &Standard);

    if(Standard == 1)
    {
        printf("your exam is at 7 AM\n");
    }
    else if(Standard == 2)
    {
        printf("your exam at 8 am\n");
    }
    else if(Standard == 3)
    {
        printf("your exam at 9 am\n");
    }
    else if(Standard == 4)
    {
        printf("your exam at 10 am\n");
    }
    else
    {
        printf("wrong standard\n");
    }
    return 0;
}