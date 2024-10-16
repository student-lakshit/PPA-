#include<iostream>
using namespace std;

int main ()
{
    int *ptr = NULL;
    int Size = 0;

    cout<<"enter the size of array : \n";
    cin>>Size;

    ptr = new int[Size];

    //ptr = (int *)malloc(Sizeof(int));
    // use the memory

    delete []ptr;


    return 0;
}