#include <stdio.h>

int main()
{
    int ageSuma = 22;
    // int ageRohit = 67;
    // decalarion syntax
    // int age[12];
    // age[0] = 67;
    // age[1] = 56;
    // age[2] = 90;

    // printf("The value of age[0] is : %d\n", age[0]);
    // printf("The value of age[1] is : %d\n", age[1]);
    // printf("The value of age[2] is : %d\n", age[2]);

    // printf("The value of age[3] is : %d\n", age[3]);

    // declartion with inilization
    // int age[] = {6, 45, 34, 23, 85};
    // printf("The value of age[0] is : %d\n", age[0]);
    // printf("The value of age[1] is : %d\n", age[1]);
    // printf("The value of age[2] is : %d\n", age[2]);

    int studentAge[12];

    // takes input from students
    // to store the value in array
    for (int i = 0; i < 12; i++)
    {
        printf("Tell your age student rolNum %d: ", i);
        scanf("%d", &studentAge[i]);
    }

    // prints the age of students
    // accesing the value
    for (int i = 0; i < 12; i++)
    {
        printf("Age of student rolNum: %d is %d\n", i, studentAge[i]);
    }

    return 0;
}
