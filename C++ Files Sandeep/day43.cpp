#include <iostream>
using namespace std;

/*
Pattern:1

*
**
***
****
*****

Pattern:2

*****
****
***
**
*

Pattern:
    *
   ***
  *****
 *******
*********

*/
int main(int argc, char const *argv[])
{

    // int n = 3;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         // if ((i == 2 && j == 0) || (i == 2 and j == 1))
    //         // {
    //         //     continue;
    //         // }
    //         cout << "*" << "  ";
    //     }
    //     cout << endl;
    // }

    // int n = 20;
    // for (int i = n; i > 0; i--)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    int n = 15;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
