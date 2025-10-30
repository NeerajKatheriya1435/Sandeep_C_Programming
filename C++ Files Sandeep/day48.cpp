#include <iostream>
using namespace std;

class Student
{
private:
    int rollNum;
    int adhar;

public:
    Student(int a, int b) : rollNum(a), adhar(rollNum + a)
    {
    }
    void displayDetails()
    {
        cout << "The roll num: " << rollNum << endl;
        cout << "The adhar num: " << adhar << endl;
    }
};

int main(int argc, char const *argv[])
{

    // Student s1(1, 5);
    // s1.displayDetails();

    // int a1 = 78;
    // a1 = 77;
    // cout << a1 << endl;

    return 0;
}
