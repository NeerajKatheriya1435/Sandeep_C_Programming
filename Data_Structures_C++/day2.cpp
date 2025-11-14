#include <iostream>
#include <vector>
using namespace std;

// Linear Searching
bool linearSerach(vector<int> arr, int val)
{
    bool b1 = false;
    for (int i = 0; i <= arr.size(); i++)
    {
        if (arr[i] == val)
        {
            b1 = true;
            cout << "The Value Found at index: " << i << endl;
            return b1;
        }
    }
    return b1;
}

int main()
{

    vector<int> arr = {4, 6, 8, 9, 2, 5};
    int val = 2;
    if (linearSerach(arr, val))
    {
    }
    else
    {
        cout << "Element Not Found" << endl;
    }
    return 0;
}