#include <stdio.h>
int main()
{
    /* code */
    // for (int i = 0; i < 11; i++)
    // {
    //     // if (i == 4)
    //     // {
    //     //     break;
    //     // }
    //     if (i % 2 == 0)
    //     {
    //         continue;
    //     }
    //     // else
    //     // {
    //     //     printf("hello");
    //     // }
    //     // printf("%d\n", i);
    //     label:

    // }
    // label:
    //     printf("Hello sir kaise ho");
    //     goto end;
    //     printf("Hello i am out of loop");
    // end:
    //     printf("Sharma ji");
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (i == 2 && j == 2)
            {
                goto end; // exit both loops
            }
            printf("%d %d\n", i, j);
        }
    }
end:
    printf("Exited from nested loops.");

    return 0;
}
