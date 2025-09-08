#include <stdio.h>

void addTwoNum(int *num1)
{
    *num1 = 78;
    printf("The addition is: %d\n", num1);
}

int main(int argc, char const *argv[])
{

    int a = 7, b = 5;
    addTwoNum(&a);
    printf("%d", a); // actual parameter
    return 0;
}
