#include <iostream>
#include <vector>
using namespace std;

// void bubuleSort(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// void insersionSort(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

int main()
{
    // soting bubble sort

    vector<int> arr = {4, 6, 3, 5, 6, 5};
    // bubuleSort(arr);
    // insersionSort(arr);

    // selectionSort(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}