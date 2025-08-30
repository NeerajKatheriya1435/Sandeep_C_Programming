#include <stdio.h>
#include <string.h>

union Employee
{
    char name[20];
    int age;
    float salary;
};

int main(int argc, char const *argv[])
{
    typedef union Employee emp;

    emp emp1;

    strcpy(emp1.name, "Neeraj Katheriya");

    // emp1.age = 56;
    // emp1.salary = 20000;
    printf("My name is %s and age is %d and salary %f\n", emp1.name, emp1.age, emp1.salary);

    // unsigned long var1 = 78;
    // typedef unsigned long uLong;
    // uLong var1 = 78;
    // printf("%d", var1);

    return 0;
}
