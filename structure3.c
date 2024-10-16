#include<stdio.h>

struct Student
{
    int RollNo; //4
    char Division;  //1
    int Age;    //4
    float Marks;    //4
    int Salary; //4
};

int main ()
{
    struct Student Amit;
    struct Student pooja;

    printf("Size of object is : %d\n",sizeof(Amit));

    Amit.RollNo = 11;
    Amit.Division = 'A';
    Amit.Marks = 90.89;
    Amit.Age = 19;
    Amit.Salary = 21000;

    pooja.RollNo = 21;
    pooja.Division = 'D';
    pooja.Marks = 93.67;
    pooja.Age = 17;
    pooja.Salary = 5000;

    printf("Age of amit is : %d\n",Amit.Age);
    printf("Age of pooja is : %d\n",pooja.Age);

    printf("Salary of amit is : %d\n",Amit.Age);
    printf("Salary of pooja is : %d\n",pooja.Age);


    return 0;
}