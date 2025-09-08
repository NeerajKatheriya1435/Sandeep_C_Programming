#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 7;
    int *pointer1 = &a;
    // printf("The address of a is : %d\n", &a);
    // printf("The address stored in pointer is : %d\n", pointer1);

    // printf("The value stored in pointer is : %d\n", *pointer1);
    // printf("The value of a is : %d\n", a);

    int arr[] = {6, 8, 9};

    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[1]);

    // printf("%d\n", pointer1);
    // printf("%d\n", pointer1 + 1);
    // printf("%d\n", pointer1 + 2);

    // derefrencing a pointer
    // printf("%d\n", *arr);
    // printf("%d\n", *(arr + 1));
    // printf("%d\n", *(arr + 2));

    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }

    return 0;
}
