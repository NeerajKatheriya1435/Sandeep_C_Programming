#include <iostream>
using namespace std;

class Student
{

private:
    int rollNum;
    float weight;

public:
    Student() {}
    Student(int a1, float b1)
    {
        rollNum = a1;
        weight = b1;
        cout << "Constructor called" << endl;
    }
    // void setData(int a1, float b1)
    // {
    //     rollNum = a1;
    //     weight = b1;
    // }
    void getData()
    {
        cout << "My Roll Num is: " << rollNum << endl;
        cout << "My weight is: " << weight << endl;
    }
};

int main(int argc, char const *argv[])
{

    // Student std1;
    // std1.setData(101, 34.78);
    // std1.getData();

    Student std1(1101, 56.78);
    Student std2(1102, 66.48);
    Student std3; // std1.getData();
    // std2.getData();
    return 0;
}
