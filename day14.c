#include <stdio.h>
int main(int argc, char const *argv[])
{

    // int marks[] = {34, 67, 85, 89, 95, 57};
    // // printf("%d", marks[3]);
    // int search = 95;
    // int found = 0;
    // for (int i = 0; i < 6; i++)
    // {
    //     if (search == marks[i])
    //     {
    //         found = 1;
    //         break;
    //     }
    // }

    // if (found)
    // {
    //     printf("Value Found\n");
    // }
    // else
    // {
    //     printf("Value not Found\n");
    // }

    // int marks[] = {34, 67, 85, 89, 95, 57};
    // // printf("%d", marks[3]);
    // int search = 915;
    // int found = 0;
    // for (int i = 0; i < 6; i++)
    // {
    //     if (search == marks[i])
    //     {
    //         found = 1;
    //         printf("Value Found at Position %d\n", i);
    //         break;
    //     }
    // }

    // if (!found)
    // {
    //     printf("Value not Found\n");
    // }

    // int marks[] = {3, 6, 8, 4};

    // int sum = 0;

    // for (int i = 0; i < 4; i++)
    // {
    //     sum = sum + marks[i];
    // }
    // printf("The sum is: %d", sum);

    int marks[] = {3, 6, 8, 4};

    int max = 0;

    for (int i = 0; i < 4; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
    }
    printf("The max num is: %d", max);

    return 0;
}
