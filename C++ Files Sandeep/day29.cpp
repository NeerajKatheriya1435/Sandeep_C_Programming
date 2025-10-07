
#include <iostream>
using namespace std;

int c = 56;

class Shivam
{
private:
    int a1 = 4;
    int b1 = 2;

public:
    int c1, d1;
    void addToNum(int a, int b)
    {
        a1 = a;
        b1 = b;
        cout << "The sum is: " << (a1 + b1) << endl;
    }
    void printDetails()
    {
        cout << "Hii i am neeraj:" << (a1 + b1) << endl;
    }
    void multiNum(int n1, int n2);
};

void Shivam::multiNum(int n1, int n2)
{
    a1 = n1;
    b1 = n2;
    cout << "The multiply is: " << (a1 * b1);
}

int main(int argc, char const *argv[])
{

    int c = 4;
    Shivam s1, s2;
    // s1.c1 = 6;
    // s1.d1 = 9;

    // cout << s1.a1 << endl;
    // cout << s1.b1 << endl;

    // s2.addToNum(3, 5);
    // cout << s2.a1 << endl;
    // cout << s2.b1 << endl;
    s1.printDetails();
    s1.multiNum(3, 8);

    cout << "\n"
         << ::c << endl;
    return 0;
}