#include <iostream>
using namespace std;

class Student
{

private:
    int age, id;
    void funch()
    {
    }

protected:
    int result = 100;
    void Funxct()
    {
    }

public:
    void setData(int age, int id)
    {
        this->age = age;
        this->id = id;
    }
    void getData()
    {
        cout << "My age is: " << age << endl;
        cout << "My id is: " << id << endl;
    }
};

// class Exam : public Student
// {
//     int sub1;

// public:
//     void func1()
//     {
//         cout << "The result is: " << result << endl;
//     }
// };

// class Exam : private Student
// {
//     int sub1;

// public:
//     void func1()
//     {
//         cout << "The result is: " << result << endl;
//     }
// };

class Exam : protected Student
{
    int sub1;

public:
    void func1()
    {
        setData(34, 1010);
        getData();
        cout << "The result is: " << result << endl;
    }
};

int main(int argc, char const *argv[])
{

    // Student s1, s2;
    // s1.result = 100;
    // cout << s1.result << endl;
    // s1.setData(23, 101);
    // s1.getData();
    // Exam e1;
    // e1.func1();
    Exam e1;
    // e1.setData(6, 8);
    e1.func1();

    return 0;
}
