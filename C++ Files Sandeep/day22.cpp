#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int arr[] = {6, 7, 4, 3};
    // int arr[7] = {4, 6, 7, 8, 8, 9, 5};
    // int arr2[5];

    // int *arr1 = new int[5];

    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // cout << arr[4] << endl;

    // arr2[0] = 90;
    // arr2[1] = 56;
    // cout << arr2[0] << endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr2[i];
    // }
    // cout << "-------" << endl;
    // for (int i = 0; i < 7; i++)
    // {
    //     cout << arr2[i] << endl;
    // }
    int arr1[] = {6, 7, 8};
    int sum = 0;
    arr1[2] = 1;
    for (int i = 0; i < 3; i++)
    {
        sum += arr1[i];
    }

    cout << arr1[2] << endl;
    cout << sum << endl;

    // delete[] arr1;
    cout << arr1[0];
    cout << arr1[1];

    return 0;
}
