#include <iostream>
using namespace std;

class Student
{
    int a = 78;
    const static int a1 = 56;

public:
    void simple()
    {
        cout << "I am Simple Function" << a << endl;
    }
    static void addTwo()
    {
        cout << "My function" << a1 << endl;
    }
};

int main(int argc, char const *argv[])
{

    Student s1;
    s1.simple();

    // Student.simple();

    s1.addTwo();
    return 0;
}
