# include <stdio.h>
# include <stdlib.h>

int main()
{
    // int i=8;
    // int j;
    // j=6;

    // Malloc function c language

    // int* ptr=(int*) malloc(4*sizeof(int)); //malloc

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter value at %d\n",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value at %d is %d\n",i,ptr[i]);
    // }
    // free(ptr);

    // calloc in c lang

    int* ptr=(int*) calloc(4,sizeof(int)); //malloc

    for (int i = 0; i < 4; i++)
    {
        printf("Enter value at %d\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n",i,ptr[i]);
    }

    int*ptrNew=(int*)realloc(ptr, 6*sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter value at %d\n",i);
        scanf("%d",&ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value at %d is %d\n",i,ptr[i]);
    }

    free(ptr);
    
    
    return 0;
}
