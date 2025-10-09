#include <iostream>
using namespace std;

class SimpleNum;

class Student
{
public:
    void myFunc(SimpleNum, SimpleNum);
};

class SimpleNum
{
    int a;

public:
    // friend void Student::myFunc(SimpleNum, SimpleNum);
    friend Student;
    void setData(int a1)
    {
        a = a1;
    }
    void getData()
    {
        cout << "The data is: " << a << endl;
    }
};

void Student::myFunc(SimpleNum n1, SimpleNum n2)
{
    cout << "The sum is: " << (n1.a + n2.a);
}

int main()
{
    SimpleNum n1, n2;
    n1.setData(6);
    n2.setData(9);

    Student s1;
    s1.myFunc(n1, n2);

    return 0;
}
