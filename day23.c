#include <stdio.h>
int main(int argc, char const *argv[])
{
    // FILE *ptr = fopen("sandeep.txt", "w"); // open the file
    FILE *ptr = fopen("sandeep.txt", "r"); // open the file
    if (ptr == NULL)
    {
    }
    else
    {
        // char name[] = "Shubham";
        // int age = 34;
        char name[34];
        char nk[34];
        int age;
        // fprintf(ptr, "Name: %s Age: %d is smart boy\n", name, age);
        // fclose(ptr);

        fscanf(ptr, "%s %d %s", name, &age, nk); // reading the data and storing the data in var
        // fscanf(ptr, "%d", &age); // reading the data and storing the data in var
        printf("Name: %s is  Age: %d is %s\n", name, age, nk);
        return 0;
    }
}
