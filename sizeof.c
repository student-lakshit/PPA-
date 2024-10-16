#include<stdio.h>

int main ()
{
    int i = 11;                     //1 byte
    char ch = 'A';                  //4 byte
    float f = 90.89;                //4 byte
    double d = 90.123456;           //8 byte

    int Arr[5];                     // 20 byte
    double Brr[5];                  // 40 byte
    float Crr[5];                   // 20 byte
    char Drr[5];                    // 5 byte

    printf("%lu\n",sizeof(ch));
    printf("%lu\n",sizeof(i));
    printf("%lu\n",sizeof(f));
    printf("%lu\n",sizeof(d));

    printf("%lu\n",sizeof(Arr));
    printf("%lu\n",sizeof(Brr));
    printf("%lu\n",sizeof(Crr));
    printf("%lu\n",sizeof(Drr));

    return 0;
}

// gcc sizeof.c -o Myexe
// Myexe.exe