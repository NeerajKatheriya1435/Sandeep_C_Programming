#include <iostream>
using namespace std;

// class A
// {
// public:
//     int roll = 56;
// };
// class B : virtual public A
// {
// public:
//     int roll = 20;
// };
// class C : virtual public A
// {
// };
// class D : public B, public C
// {
// };
// int main()
// {
//     D obj;
//     obj.roll = 10; // No ambiguity now
//     cout << "Roll = " << obj.roll;
//     return 0;
// }

class Human
{
    int age;

public:
    Human() {};
    Human(int age1)
    {
        age = age1;
        cout << "Construcor called Human Class" << endl;
    }
};

class Dog
{
    int dog;

public:
    Dog() {};
    Dog(int dog1)
    {
        dog = dog1;
        cout << "Construcor called Dog Class" << endl;
    }
};

class Programmer : public Dog, virtual public Human
{
    int id;

public:
    Programmer() {}
    Programmer(int age1, int id1, int dog1) : Dog(dog1), Human(age1)
    {
        id = id1;
        cout << "Construcor called Programmer Class" << endl;
    }
};

int main(int argc, char const *argv[])
{
    // Human h1(23);
    Programmer p1(23, 1012, 90), p2;

    return 0;
}
