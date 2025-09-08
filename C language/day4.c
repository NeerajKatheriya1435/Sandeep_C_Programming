#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a = 2;
    int b = 3;
    // printf("%d\n", a & b);
    // printf("%d\n", a | b);
    // int age = (a > 1) ? 67 : 89;
    // printf("%d\n", age);

    // printf("%d\n", sizeof(a));
    int num1, num2;
    printf("Enter the number 1: \n");
    scanf("%d", &num1);
    printf("Enter the number 2: \n");
    scanf("%d", &num2);

    printf("The sum is: %d\n", (num1 + num2));

    return 0;
}
