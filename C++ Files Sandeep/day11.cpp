#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    // int *arr = new int[n];
    int *arr;
    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value at index " << i << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}
