#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    // 2D Array

    int arr1[] = {6, 8, 5, 3, 7}; // 1D Array

    // int twoD[3][3] = {{4, 7, 2}, {2, 8, 4}, {4, 9, 0}};
    // cout << "The value is: " << twoD[2][1];
    // int *ptr = new int[3];
    // delete twoD;

    // updating the value
    // twoD[2][2] = 90;

    // Accessing the value from 2-D array
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << twoD[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // You have to create an array and put the values;

    int arrTwoD[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value at: " << i << "," << j << ": " << endl;
            cin >> arrTwoD[i][j];
        }
    }
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arrTwoD[i][j] << " ";
            sum += arrTwoD[i][j];
        }
        cout << endl;
    }

    cout << "The total is: " << sum;

    // Transpose array

    return 0;
}
