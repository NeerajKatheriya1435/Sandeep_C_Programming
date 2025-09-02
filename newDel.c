#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a, int b)
{
    return a + b;
};
int main(int argc, char const **argv)
{
    // printf("The args are: %d\n", argc);
    // char name[20];
    // strcpy(name, argv[1]);
    // int name1 = atoi(argv[2]);
    // int name2 = atoi(argv[3]);

    // int sum = name1 + name2;
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("The value is at argv[%d] is %s\n", i, argv[i]);
    // }
    // printf("The sum is: %d", sum);

    int (*funcPtr)(int, int);
    funcPtr = &sum;

    printf("The sum is: %d\n", (funcPtr)(7, 9));
    return 0;
}
