
#include <stdio.h>

void multiPLyTwoNumber(int num1, int num2)
{
    printf("%d\n", (num1 * num2));
}

int addThreeNumber(int a, int b, int c)
{
    return (a + b + c);
}

void greet()
{
    printf("Good Morning Sir!\n");
}

int main()
{
    int a = 9;
    int b = 3;

    // function without parameter without return value
    greet();

    // function with parameter withoout return value
    multiPLyTwoNumber(a, b);

    // function with paremeter with return value
    int sumThreeNum = addThreeNumber(5, 7, 9); // 21
    printf("%d\n", sumThreeNum);

    return 0;
}
