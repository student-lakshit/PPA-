#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main ()
{
    char Name[30];
    int fd = 0;

    printf("enter name of file that you want to creat : "\n);
    scanf("%s",Name);

    fd = creat(Name, 0777);
    if(fd == -1)
    {
        printf("unable to create file\n");
    }
    else
    {
        printf("file gets created eith FD %d\n",fd);
    }

    return 0;
}