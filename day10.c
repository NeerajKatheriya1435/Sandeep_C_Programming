#include <stdio.h>

void sumTwoNumebrs(int a, int b)
{
    printf("The sum is %d:\n", (a + b));
}

int addThreeNum(int s, int v, int g)
{
    // int a=7;
    // printf("The sum is: \n");
    return (s + v + g);
}

void simpleFunction()
{
    printf("Hello Bhia Khali hu\n");
}

int main()
{

    // int a = 8;
    // int b = 7;
    // printf("%d\n", (a + b));

    // int a1 = 8;
    // int b1 = 4;
    // printf("%d\n", (a1 + b1));

    // sumTwoNumebrs(5, 6);
    // sumTwoNumebrs(6, 9);
    // sumTwoNumebrs(6, 9);
    // sumTwoNumebrs(6, 9);
    sumTwoNumebrs(6, 9);
    int sum = addThreeNum(5, 7, 9); // 21
    printf("%d", sum);

    simpleFunction();
    simpleFunction();

    return 0;
}
