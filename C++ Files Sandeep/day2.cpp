#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{

    int a = 9;
    int b = 7;
    // cout << (a + b) << endl;
    // cout << (a + b) << "\n";
    // cout << (a - b) << endl;
    // cout << (a * b) << endl;
    // cout << (a / b) << endl;
    // cout << (a % b) << endl;

    // cout << (a == b) << endl; // 0
    // cout << (a >= b) << endl; // 1
    // cout << (a <= b) << endl; // 0
    // cout << (a < b) << endl;  // 0
    // cout << (a > b) << endl;  // 1
    // cout << (a != b) << endl; // 1

    cout << (4 > 6 && 8 > 4 && 3 >= 3) << endl;

    cout << !(4 > 6 || 8 > 4 || 3 >= 3) << endl;

    return 0;
}
