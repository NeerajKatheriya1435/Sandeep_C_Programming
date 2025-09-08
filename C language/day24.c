#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[20];
    int age;
    float salary;
};

int main()
{

    struct Employee emp1, emp2;
    strcpy(emp1.name, "Neeraj Katheriya");
    emp1.age = 56;
    emp1.salary = 20000;
    printf("My name is %s and age is %d and salary %f\n", emp1.name, emp1.age, emp1.salary);

    strcpy(emp2.name, "Sandeep Kumar");
    emp2.age = 66;
    emp2.salary = 22000;
    printf("My name is %s and age is %d and salary %f\n", emp2.name, emp2.age, emp2.salary);

    return 0;
}
