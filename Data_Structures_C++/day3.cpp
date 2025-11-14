#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n;
    while (low <= high)
    {
        int low = 0, high = n - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (arr[mid] == key)
            {
                cout << "Element found at index: " << mid << endl;
                return arr[mid];
            }

            else if (arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
    return -1;
}

int main()
{
    // reverse an array
    int arr[] = {6, 15, 34, 55, 64, 93};

    // start=0 amd end=5
    // compare values arr[start]>arr[end]
    // swap if required
    // start++ and end++
    // reverse and array
    // int start = 0;

    int end = (sizeof(arr) / sizeof(int));
    int searchVal = 93;

    // while (start <= end)
    // {
    //     int temp = arr[start];
    //     arr[start] = arr[end];
    //     arr[end] = temp;
    //     start++;
    //     end--;
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    cout << binarySearch(arr, end, searchVal);

    return 0;
}