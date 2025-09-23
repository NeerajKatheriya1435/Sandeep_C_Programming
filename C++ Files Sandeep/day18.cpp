#include <iostream>
using namespace std;

// void resultSum()
// {
//     static int num1 = 67;
//     cout << num1 << endl;
//     num1++;
// }
// void resultSum(const int num1)
// {
//     // num1 = 67;
//     // num1 = 78;

//     cout << num1 << endl;
// }

inline int sumTwoNumbers(int a, int b)
{
    return (a + b);
}

int main(int argc, char const *argv[])
{

    // resultSum();
    // resultSum();
    // resultSum();

    // int num1 = 34;
    // resultSum(num1);
    // cout << num1;

    cout << sumTwoNumbers(3, 7); // 10
    cout << sumTwoNumbers(3, 7); // 10
    cout << sumTwoNumbers(3, 7);
    cout << sumTwoNumbers(3, 7);
    cout << sumTwoNumbers(3, 7);
    cout << sumTwoNumbers(3, 7);
    cout << sumTwoNumbers(3, 7);

    return 0;
}
