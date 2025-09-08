#include <stdio.h>

int factoril(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factoril(n - 1);
    }
}

int main(int argc, char const *argv[])
{

    // 5!= 5*4*3*2*1=120
    // 5!=5*4!
    // 4!=4*3!
    // 3!=3*2!
    // 2!=2*1!
    // 1!=1
    // int fact = factoril(1);
    // printf("The factorial is: %d", fact);
    // int n = 4;
    // int fact = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     fact = fact * i;
    // }
    // printf("The factorial is: %d", fact);
    return 0;
}
