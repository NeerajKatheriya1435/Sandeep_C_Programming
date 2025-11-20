#include <iostream>
using namespace std;

struct Array
{
    int *arr;
    int size;
    int capacity;
};

Array createArray(int cap)
{
    Array a;
    a.capacity = cap;
    a.size = 0;
    a.arr = new int[cap];
    return a;
};

// Insert an element

void insertElement(Array &arr, int elem)
{
    if (arr.size == arr.capacity)
    {
        cout << "Overfolw" << endl;
        return;
    }
    arr.arr[arr.size] = elem;
    arr.size++;
}

void deleteAt(Array &a, int index)
{
    if (index < 0 || index >= a.size)
        return;

    for (int i = index; i < a.size - 1; i++)
    {
        a.arr[i] = a.arr[i + 1]; // shift left
    }

    a.size--;
}

void dispalay(Array &arr)
{
    for (int i = 0; i < (arr.size); i++)
    {
        // cout << (*(arr.arr + i)) << endl;
        cout << (arr.arr[i]) << endl;
    }
}

int linearSearch(Array a, int key)
{
    for (int i = 0; i < a.size; i++)
    {
        if (a.arr[i] == key)
        {
            cout << "Element Found: " << endl;
            return i;
        }
    }
    cout << "Elment not Found" << endl;
    return -1;
}

int main()
{

    Array b1;
    b1 = createArray(10);
    // cout << b1.capacity;

    // int element = 90;
    // insertElement(b1, element);
    // insertElement(b1, 56);
    // insertElement(b1, 86);
    // insertElement(b1, 34);

    // a.capacity = 90;
    // cout << a.capacity << endl;
    // deleteAt(b1, 2);
    // deleteAt(b1, 0);

    // dispalay(b1);
    // int result = linearSearch(b1, 34);
    // cout << result << endl;

    insertElement(b1, 45);
    insertElement(b1, 56);
    insertElement(b1, 23);
    insertElement(b1, 12);
    insertElement(b1, 90);

    deleteAt(b1, 1);
    cout << linearSearch(b1, 112) << endl;
    dispalay(b1);
    return 0;
}