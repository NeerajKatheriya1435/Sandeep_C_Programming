#include <iostream>
using namespace std;

// int area(int side)
// {
//     return (side * side);
// }

// int area(int l, int b)
// {
//     return (l * b);
// }

// int area(int f, float g)
// {
//     return (f * g);
// }

double simpleIntrest(int principal, float rate = 20, int time1 = 2)
{
    return (principal * rate * time1) / 100;
}

int main()
{

    // int sum = area(4, 6);
    // cout << "The area of Recatangle is: " << sum << endl;
    // cout << "The area of Square is: " << area(8) << endl;
    // cout << "The area of Square is: " << area(8, 1.5f) << endl;

    int ammount = 200;
    float rate = 10;
    int t1 = 2;

    // cout << "Simple Interest: " << simpleIntrest(ammount, rate, t1) << endl;
    // cout << "Total Money with Interest: " << (200 + simpleIntrest(ammount, rate, t1)) << endl;
    cout << "Simple Interest: " << simpleIntrest(ammount) << endl;
    // cout << "Total Money with Interest: " << (200 + simpleIntrest(ammount, rate)) << endl;

    return 0;
}
