#include <stdio.h>

int main()
{
    // int arrTwoD[2][2];

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("The value at %d,%d is: %d\n", i, j, arrTwoD[i][j]);
    //     }
    // }

    // Recieving value from user

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("Enter value at %d,%d is:\n", i, j);
    //         scanf("%d", &arrTwoD[i][j]);
    //     }
    // }

    // Getting / Accessing the value from user

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         // printf("The value at %d,%d is: %d\n", i, j, arrTwoD[i][j]);
    //         printf("%d ", arrTwoD[i][j]);
    //     }
    //     printf("\n");
    // }

    // Sum of value
    // int sum = 0;
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         // printf("The value at %d,%d is: %d\n", i, j, arrTwoD[i][j]);
    //         // printf("%d ", arrTwoD[i][j]);
    //         sum = sum + arrTwoD[i][j];
    //     }
    //     printf("\n");
    // }
    // printf("The sum is: %d", sum);

    // Transpose of 2d array

    int arrTwoD[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int tarray[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tarray[j][i] = arrTwoD[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("The value at %d,%d is: %d\n", i, j, arrTwoD[i][j]);
            printf("%d ", tarray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
