#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    // int a = 56;
    // int *ptr = &a;
    // int *ptr1 = nullptr;

    // addres at a
    // cout << ptr << endl;
    // cout << &a << endl;

    // value in a
    // cout << *ptr << endl;
    // cout << a << endl;

    // pointer to pointer

    // int num1 = 34;
    // int *ptr = &num1;

    // int **pointer1 = &ptr;

    // cout << pointer1 << endl;
    // cout << &ptr << endl;

    // cout << *pointer1 << endl;
    // cout << &num1 << endl;

    // cout << **pointer1 << endl;
    // cout << num1 << endl;

    // int arr[] = {5, 8, 4, 2};
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // int *ptr = arr;
    // cout << *ptr << endl;
    // arr++;
    // ptr++;
    // cout << *(ptr) << endl;
    // ptr++;
    // cout << *(ptr) << endl;
    // ptr++;
    // cout << *(ptr) << endl;

    float arr1[] = {4.67, 3.89, 6.32};
    cout << *arr1 << endl;
    cout << *(arr1 + 1) << endl;
    return 0;
}
