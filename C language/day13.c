#include <stdio.h>

// int areSquare()
// {
//     int userVal;
//     printf("Enter the number you want square\n");
//     scanf("%d", &userVal);
//     int area = userVal * userVal;
//     return area;
// }

int main(int argc, char const *argv[])
{

    // int square = areSquare();
    // printf("The area of square is: %d\n", square);

    int arr1[5] = {16, 8, 5, 8, 9};
    // arr1[0] = 8;
    // arr1[1] = 45;
    // printf("The value at index 0 is: %d\n", arr1[0]);
    // printf("The value at index 1 is: %d\n", arr1[1]);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the value at index %d:\n", i);
    //     scanf("%d", &arr1[i]);
    // }

    // for (int j = 0; j < 5; j++)
    // {
    //     // iteration of array (accesing the element of array)
    //     printf("The value at index at %d is %d\n", j, arr1[j]);
    // }

    // find a value
    int search = 6;
    char findVal[12] = "";
    for (int j = 0; j < 5; j++)
    {
        // printf("The value at index at %d is %d\n", j, arr1[j]);
        if (search == arr1[j])
        {
            printf("Value Find");
            break;
        }
        else
        {
            findVal[12] = "Value not found";
        }
    }

    return 0;
}
