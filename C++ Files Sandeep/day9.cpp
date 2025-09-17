#include <iostream>
using namespace std;

int main()
{
    int number = 5;

// for (int i = 0; i < number; i++)
// {
//     if (i == 3)
//     {
//         break;
//     }
//     cout << i << endl;
// }

// for (int i = 0; i < number; i++)
// {
//     if (i == 3)
//     {
//         continue;
//     }
//     cout << i << endl;
// }
label2:

    printf("hello How are you");

    for (int i = 0; i < 6; i++)
    {
        if (i == 3)
            goto label1;

        cout << i << endl;
    }

    cout << "End of line";

label1:
{
    cout << "Hello kaise ho";
    goto label2;
}

    return 0;
}
