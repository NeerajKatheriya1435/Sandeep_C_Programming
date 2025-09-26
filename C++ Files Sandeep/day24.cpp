#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int arr[3][3] = {{2, 5, 8}, {3, 4, 8}, {9, 2, 6}};
    int arrTrans[3][3];

    // accessing the value
    // cout << arr[0][2];

    // updating the value
    // arr[1][1] = 90;
    // cout << arr[1][1];

    //  traversing an is_array
    // int sum = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += arr[i][j];
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "The sum is: " << sum;

    // trnspose an array

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         arrTrans[j][i] = arr[i][j];
    //     }
    // }
    // cout << "After transpose: " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arrTrans[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int arrMy[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The value at (" << i << "," << j << ") is: " << endl;
            cin >> arrMy[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arrMy[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
