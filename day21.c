#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    // char sumn='8';
    // char suman[20] = "Sandeep";
    // char arr[12] = {'s', 'n', 'd', '\0'};
    // int i = 0;
    // while (arr[i] != '\0')
    // {
    //     printf("%c", arr[i]);
    //     i++;
    // }
    // char arr[12] = "sumit";
    // gets(arr);
    // puts(arr);
    // printf("%s", suman);

    // String length
    char arr[] = "Suman";
    char newchar[34] = "Suman";
    // printf("The character in string is: %d\n", strlen(arr));

    // strcpy(newchar, arr);

    // printf("The value of newStr is: %s\n", newchar);

    // strcat(arr, newchar);
    // printf("The value at str1 is: %s", arr);
    printf("The value is %d", strcmp(arr, newchar));
    return 0;
}
