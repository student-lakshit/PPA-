#include<stdio.h>
#include<string.h>

int main ()
{
    char Arr[] = "hello";
    char Brr[] = {'h','e','l','l','o','\n'};

    printf("%s\n",Arr);
    printf("%s\n",Brr);

    printf("%d\n",strlen(Arr));
    printf("%d\n",strlen(Brr));
    
    return 0;
}