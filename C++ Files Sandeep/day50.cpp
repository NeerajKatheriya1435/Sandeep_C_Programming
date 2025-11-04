#include <iostream>
using namespace std;

class Student
{
    int rollNum;
    int class1;

public:
    Student(int rollNum, int class1)
    {
        this->rollNum = rollNum;
        this->class1 = class1;
    }
    void displayData()
    {
        cout << "The roll number is: " << rollNum << endl;
        cout << "The class is: " << class1 << endl;
    }
};

int main(int argc, char const *argv[])
{

    Student s1(101, 14);
    s1.displayData();
    return 0;
}
