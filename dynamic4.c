#include<stdio.h>
#include<stdlib.h>  //for malloc, calloc, realloc and free

int main ()
{    
    int *ptr = NULL;

    ptr = (int *)realloc(NULL, 5 * sizeof(int));

    //use the memory

    free(ptr);

    return 0;
}