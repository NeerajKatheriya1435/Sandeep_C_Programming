#include <stdio.h>
#include <stdlib.h>
#include "del.c"
#define PI 3.14

#define SQARE(x) x *x

// int *fun()
// {
//     int x = 5;
//     return &x; // Dangling pointer (x is destroyed after function ends)
// }

extern int shivam;

int main()
{
    // void *ptr;
    int *ptr;
    // ptr = NULL;

    int var1 = 7;
    // char sandeep = '%';

    ptr = &var1;
    // ptr = &sandeep;
    // printf("The value is: %d", *(int *)ptr);
    // printf("The value is: %c", *(char *)ptr);
    // printf("The value is in %d", *ptr);
    // free(ptr);

    // int *ptr2 = fun();
    // printf("The value is in %d", *ptr2);
    // printf("The value is in %f\n", PI);
    // printf("The value is in %d\n", SQARE(15));
    // printf("The value is: %d", shivam);

    printf("The lines are : %d\n", __LINE__);
    printf("The File is : %s\n", __FILE__);
    printf("The Date is : %s\n", __DATE__);
    printf("The Time is : %s\n", __TIME__);
    // ptr = NULL;

    return 0;
}