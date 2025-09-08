#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    // int a = 56;
    // char ch = '6';
    // void *var1 = &a;
    // var1 = &ch;
    // printf("the value in var1 is: %c\n", *(char *)var1);
    // free(var1);
    // return 0;

    int *ptr = NULL;
    // int a = 957;
    int a = 89;
    ptr = &a;
    printf("the value is : %d", *ptr);
}
