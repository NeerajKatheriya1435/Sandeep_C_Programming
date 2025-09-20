#include <iostream>
using namespace std;

int average(int &num1, int num2, int num3)
{
    num1 = 20;
    cout << "The num1 is: " << num1 << endl;
    return ((num1 + num2 + num3) / 3);
}

int main(int argc, char const *argv[])
{
    int num1 = 8;
    int num2 = 4;
    int num3 = 3;

    cout << average(num1, num2, num3) << endl;

    cout << "The num1 is: " << num1 << endl;

    return 0;
}
