#include <iostream>
using namespace std;

// type--> void int float
// functioname--> variable
// parameter1,paramter2

void addTwoNum(int, int);

void greet();

int multiply(int num1, int num2)
{
    // cout << (num1 * num2) << endl;
    return 56;
}

int main(int argc, char const *argv[])
{

    // int num1 = 8;
    // int num2 = 5;
    // cout << (num1 + num2) << endl;

    // int num3 = 6;
    // int num4 = 2;
    // cout << (num3 + num4) << endl;

    addTwoNum(4, 8);
    float a1 = 7.8;
    float b1 = 6.4;
    cout << (a1 + b1) << endl;

    addTwoNum(2, 9); // actual parametre
    addTwoNum(4, 9);
    addTwoNum(2, 5);
    addTwoNum(2, 9);

    printf("Data passed \n");
    greet();

    cout << multiply(6, 8) << endl;
    cout << multiply(2, 8) << endl;

    return 0;
}

void addTwoNum(int num1, int num2)
{
    cout << (num1 + num2) << endl;
}
void greet()
{
    cout << "hello Good morning" << endl;
}