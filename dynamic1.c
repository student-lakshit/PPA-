#include<stdio.h>
#include<stdlib.h>  //for malloc, calloc, realloc and free

int main ()
{
    int Arr[5];     //staic memory allocation

    int Size = 0;
    
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&Size);

    ptr = (int *)malloc(Size * sizeof(int));

    //use the memory

    free(ptr);

    return 0;
}