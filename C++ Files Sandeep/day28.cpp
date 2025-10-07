
#include <iostream>
using namespace std;

class Shivam
{

public:
    int a1;
    int b1;

    void addToNum(int a, int b)
    {
        a1 = a;
        b1 = b;
        cout << "The sum is: " << (a1 + b1) << endl;
    }
};

int main(int argc, char const *argv[])
{

    Shivam s1, s2;
    s1.a1 = 6;
    s1.b1 = 9;

    cout << s1.a1 << endl;
    cout << s1.b1 << endl;

    s2.addToNum(3, 5);
    cout << s2.a1 << endl;
    cout << s2.b1 << endl;
    return 0;
}
