#include<stdio.h>

int main ()
{
    int Standard = 0;

    printf("enter your stndard : \n");
    scanf("%d", &Standard);

    switch(Standard)
    {
        case 1:
            printf("your exam is at 7 am\n");
            break;
        case 2:
            printf("your exam is at 8 am\n");
            break;
        case 3:
            printf("your exam is at 9 am\n");
            break;
        case 4:
            printf("your exam is at 10 am\n");
            break;
        default:
            printf("wrong choice\n");
    }

    return 0;
}