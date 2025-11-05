#include <iostream>
using namespace std;

// T1=int
// T2=float

// template <typename T1>
// T1 addTwoNum(T1 a1, T1 b1)
// {
//     T1 result = a1 + b1;
//     return result;
// }

template <typename T1, typename T2>
T1 addTwoNum(T1 a1, T2 b1)
{
    T1 result = a1 + b1;
    return result;
}

int main(int argc, char const *argv[])
{

    // cout << "The sum is: " << addTwoNum(4, 9) << endl;
    // cout << "The sum is: " << addTwoNum(9.9, 9.9) << endl;
    // cout << "The sum is: " << addTwoNum(9, 9.9) << endl;
    // cout << "The sum is: " << addTwoNum('A', 4) << endl;
    return 0;
}
