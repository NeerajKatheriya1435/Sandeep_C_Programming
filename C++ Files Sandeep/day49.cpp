#include <iostream>
using namespace std;

class Student
{
private:
public:
    int rollNum;
    int adhar;
    Student() {}
    Student(int rollNum, int adhar)
    {
        this->rollNum = rollNum;
        this->adhar = adhar;
    }
    void displayDetails()
    {
        cout << "The roll num: " << rollNum << endl;
        cout << "The adhar num: " << adhar << endl;
    }
};

int main(int argc, char const *argv[])
{

    // Student s1(101, 1234567), s2(103, 34567898765);
    // s1.displayDetails();
    // Student s1 = Student(101, 34567);
    // Student s2 = Student(102, 12345);
    // Student *ptr1 = &s1;
    // Student *ptr2 = &s2;

    // cout << ptr << endl;
    // cout << &s1 << endl;
    // (*ptr).displayDetails();
    // ptr1->adhar = 787;
    // ptr1->displayDetails();
    // ptr2->rollNum = 1234;
    // ptr2->displayDetails();

    // int *ptr = new int[45];
    // Student *ptr1 = new Student[12];
    // ptr1[0].adhar = 690;
    // ptr1[0].rollNum = 101;
    // ptr1[0].displayDetails();

    // ptr1[1].rollNum = 102;
    // ptr1[1].adhar = 999;
    // ptr1[1].displayDetails();

    // (*ptr1).adhar = 690;
    // (*ptr1).rollNum = 101;
    // (*ptr1).displayDetails();

    // (*(ptr1 + 1))
    //     .rollNum = 102;
    // (*(ptr1 + 1))
    //     .adhar = 999;
    // (*(ptr1 + 1))
    //     .displayDetails();
    Student s1(101, 456), s2(102, 666);

    s1.displayDetails();
    s2.displayDetails();
}
