#include <iostream>
using namespace std;

// Multilevel inheritance

class Student
{

public:
    int age;
    string name;
    void displayData()
    {
        cout << "My name is: " << name << endl;
        cout << "My age is: " << age << endl;
    }
};

class Exam : public Student
{

public:
    int physics, maths;
    void setData(int num1, int num2)
    {
        physics = num1;
        maths = num2;
    }
};

class Result : public Exam
{
public:
    int result;
    void myResult()
    {
        result = physics + maths;
        cout << "My Result is: " << result << endl;
    }
};

int main(int argc, char const *argv[])
{

    Result r1 = Result();
    r1.age = 56;
    r1.name = "Vandana";
    r1.displayData();
    r1.setData(5, 45);
    r1.myResult();

    return 0;
}
