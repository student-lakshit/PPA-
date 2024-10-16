#include<stdio.h>
#include<stdlib.h>  //for malloc, calloc, realloc and free

int main ()
{
    int Arr[5];     //staic memory allocation

    int Size = 0;
    
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&Size);

    ptr = (int *)calloc(Size , sizeof(int));
    //ptr = (int *)calloc(12, 500ml);
    //ptr = (int *)malloc(12, 600ml);


    //use the memory

    free(ptr);

    return 0;
}