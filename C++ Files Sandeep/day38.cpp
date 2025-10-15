#include <iostream>
using namespace std;

// class Student{
//     int id,age;
//     public:
//     void setData(int id,int age){
//         this->id=id;
//         this->age=age;
//     }
//     void getData(){
//         cout<<"My id is: "<<id<<endl;
//         cout<<"My age is: "<<age<<endl;
//     }
// };

void area(int side)
{
    cout << "The area of square is: " << (side * side) << endl;
}
void area(int length, int breadth)
{
    cout << "The area of rectangle is: " << (length * breadth) << endl;
}

// void area(int length,float breadth){
//     cout<<"The area of rectangle is: "<<(length*breadth)<<endl;
// }

class Parent
{
    int age;

public:
    void setData(int age1)
    {
        age = age1;
    }
    void getData()
    {
        cout << "My age is: " << age << endl;
    }
};

class Son : public Parent
{

    int id = 78;

public:
    void ddata()
    {
        cout << "My id is: " << id << endl;
    }
};

int main(int argc, char const *argv[])
{

    // Student s1,s2;
    // s1.setData(101,34);
    // s1.getData();

    // s2.setData(102,56);
    // s2.getData();

    // area(4);
    // area(9,8);
    Parent p1;
    p1.setData(23);
    p1.getData();

    Son s1;
    s1.setData(34);
    s1.getData();
    s1.ddata();

    return 0;
}
