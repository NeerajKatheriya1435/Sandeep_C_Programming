#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    // int aman = 6;
    // const int aman = 6;
    // printf("%d\n", aman);
    // aman = 89;
    // printf("%d\n", aman);
    // float num3;
    // scanf("%f", &num3);
    // printf("%f", num3);

    // int age = 6;

    // if else statements

    // if (age > 18)
    // {
    //     printf("You can drive the car\n");
    // }
    // else
    // {
    //     printf("You can not drive the car\n");
    // }

    // switch case statement

    int day;
    printf("Enter the day\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;

    default:
        printf("Please input value between 1 to 6");
        break;
    }

    return 0;
}
