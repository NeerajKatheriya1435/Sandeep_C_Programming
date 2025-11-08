// #include <iostream>
// #include <array> // for array, at()
// #include <tuple> // for get()
// using namespace std;
// int main()
// {
// Initializing the array elements

// array<int, 7> ar = {15, 2, 3, 4, 5, 16, 8};

// Printing array elements using at()
// cout << "The array elements are (using at()) : ";
// for (int i = 0; i < 6; i++)
//     cout << ar.at(i) << " ";
// cout << endl;

// Printing array elements using get()
// cout << "The array elements are (using get()) : ";
// cout << get<0>(ar) << " " << get<1>(ar) << " ";
// cout << get<2>(ar) << " " << get<3>(ar) << " ";
// cout << get<4>(ar) << " " << get<5>(ar) << " ";
// cout << endl;

// // Printing array elements using operator[]
// cout << "The array elements are (using operator[]) : ";
// for (int i = 0; i < 6; i++)
//     cout << ar[i] << " ";
// cout << endl;
// int &a = ar.front();
// cout << "The value at index first is: " << a << endl;
// int &a = ar.back();
// cout << "The value at index first is: " << a << endl;

//     cout << "arr size is: " << ar.size() << endl;
//     cout << "arr max_size is: " << ar.max_size() << endl;

//     return 0;
// }

// C++ code to demonstrate working of swap()
#include <iostream>
#include <array> // for swap() and array
using namespace std;
int main()
{

    // Initializing 1st array
    // array<int, 6> ar = {1, 2, 3, 4, 5, 6};

    // Initializing 2nd array
    // array<int, 6> ar1 = {7, 8, 9, 10, 11, 12};

    // Printing 1st and 2nd array before swapping
    // cout << "The first array elements before swapping are : ";
    // for (int i = 0; i < 6; i++)
    //     cout << ar[i] << " ";
    // cout << endl;
    // cout << "The second array elements before swapping are : ";
    // for (int i = 0; i < 6; i++)
    //     cout << ar1[i] << " ";
    // cout << endl;

    // Swapping ar1 values with ar
    // ar.swap(ar1);

    // // Printing 1st and 2nd array after swapping
    // cout << "The first array elements after swapping are : ";
    // for (int i = 0; i < 6; i++)
    //     cout << ar[i] << " ";
    // cout << endl;
    // cout << "The second array elements after swapping are : ";
    // for (int i = 0; i < 6; i++)
    //     cout << ar1[i] << " ";
    // cout << endl;

    // array<int, 6> ar;
    // ar.fill(19);
    // if (ar.empty())
    // {
    //     cout << "Array is Empty" << endl;
    // }
    // else
    // {
    //     cout << "Array is not Empty" << endl;
    // }

    // for (int i = 0; i < 6; i++)
    //     cout << ar[i] << " ";
    // cout << endl;
    return 0;
}