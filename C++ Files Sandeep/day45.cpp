#include <iostream>
using namespace std;

class A
{
    int roll;
    int id;

public:
    A(int x, int y) : roll(x), id(y + roll)
    {

        cout << "Construcor A Called" << endl;
        cout << "The value of roll is: " << roll << endl;
        cout << "The value of id is: " << id << endl;
    }
};

class B : public A
{
    int shubham;

public:
    B(int a1, int b1, int c1) : A(a1, b1), shubham(c1)
    {
        cout << "My value of shubham is: " << shubham << endl;
    }
};

class C
{
};

int main(int argc, char const *argv[])
{

    // A obj1(23, 1010);
    B b1(34, 2576, 89);

    return 0;
}
