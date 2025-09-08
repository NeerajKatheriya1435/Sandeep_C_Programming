#include <stdio.h>

int main(int argc, char const *argv[])
{
    int value = 3;

    // if (value % 2 == 0)
    // {
    //     printf("The value is even");
    // }
    // else
    // {
    //     printf("Value is Odd");
    // }
    int sum = 0;
    for (int i = 1; i <= value; i++)
    {
        sum += i;
    }
    printf("The value is %d", sum);

    return 0;
}
