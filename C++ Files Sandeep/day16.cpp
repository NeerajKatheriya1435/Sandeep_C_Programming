#include <iostream>
#include <cmath>
using namespace std;

void greet()
{
    cout << "Hello Good Morning" << endl;
}

double average(int, int);

int main(int argc, char const *argv[])
{

    greet();

    // cout << greet() << endl;
    double d1 = average(7, 8); // 7.5
    cout << "The average is: " << d1 << endl;

    cout << sqrt(25) << endl;

    return 0;
}

double average(int a, int b)
{
    return double(a + b) / 2;
}