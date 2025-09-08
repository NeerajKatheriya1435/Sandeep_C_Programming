#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b, int c)
{
    return a + b + c;
}

void functionPtr(int (*newFunc)(int, int, int))
{
    // dgfdthdvdfg
    // fdgf
    printf("The value is: %d", newFunc(15, 8, 3));
}

int main(int argc, char const **argv)
{

    // printf("The value is %d\n", argc);
    // for (int i = 0; i < argc; i++)
    // {
    //     printf("The value at arrgv[%d] is : %s\n", i, argv[i]);
    // }

    char opration[4] = "sum";
    char opt[4] = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    // int sum = num1 * num2;
    printf("The sum is: %s", opration);

    // if ()
    // {
    //     printf("The sum is: %d", sum);
    // }

    // int addThree = sum(2, 4, 6);

    // int (*funcPt)(int, int, int);

    // funcPt = &sum;
    // functionPtr(funcPt);

    // printf("The value is: %d", funcPt(5, 8, 3));

    return 0;
}
