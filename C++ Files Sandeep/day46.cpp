#include <iostream>
using namespace std;

class Student
{

    // private:
public:
    int age;
    int id;
    // Student()
    // {
    //     cout << " I am First Constructor" << endl;
    // }
    Student(int age1, int id1)
    {
        age = age1;
        id = id1;
    }
    // void setData(int age1, int id1)
    // {
    //     age = age1;
    //     id = id1;
    // }
    // void show()
    // {
    //     cout << "The value of age is: " << age << endl;
    //     cout << "The value of id is: " << id << endl;
    // }
};

class Programmer : public Student
{
    int marks;

public:
    Programmer(int age1, int id1) : Student(age1, id1)
    {
        cout << "Hello Derived Class" << endl;
    }
    void getMarks()
    {
        cout << "The value of age is: " << age << endl;
        cout << "The value of id is: " << id << endl;
        cout << "My Marks are: " << marks << endl;
    }
};

int main()
{

    // Student s1(19, 102), s2(34, 420), s3;
    // s3 = Student(34, 111);
    // s1.setData(45, 102);
    // s1.show();
    // cout << "--------" << endl;
    // s2.show();
    // s3.show();
    // return 0;
    // Student s1;
    Programmer p1(35, 102);
    p1.getMarks();
}
