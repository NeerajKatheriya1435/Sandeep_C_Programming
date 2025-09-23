#include <iostream>
using namespace std;

// int fact(int num1)
// {
//     if (num1 == 0 || num1 == 1)
//     {
//         return 1;
//     }
//     return num1 * fact(num1 - 1);
// }

int main(int argc, char const *argv[])
{
    // cout << "The factorial is: " << fact(5) << endl;
    // cout << "The factorial is: " << fact(6) << endl;

    int n = 6, fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "the factorial is: " << fact << endl;

    return 0;
}
