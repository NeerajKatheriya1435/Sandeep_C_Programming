#include <stdio.h>
#include "delete.c"

extern int shivam;

void scoFunc()
{
    static int j = 0;
    printf("The value is: %d\n", shivam);
    j++;
}
int main(int argc, char const *argv[])
{
    // enum WeekDay
    // {
    //     Sunday,
    //     Monday,
    //     Tuesday,
    //     WednesDay
    // };

    // enum WeekDay today;
    // today = WednesDay;
    // printf("The value of day is: %d", today);
    // int j = 8;
    // scoFunc();
    // scoFunc();
    // scoFunc();
    // scoFunc();
    // printf("The value is: %d", shivam);

    register int a = 8;

    printf("The value is: %d", a);

    return 0;
}
