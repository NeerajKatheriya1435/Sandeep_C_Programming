#include <iostream>
using namespace std;

class Human
{
    string name;
    int age;

public:
    Human() {};
    ~Human()
    {
        cout << "Destructor called!!!!!" << endl;
    }
    Human(string a, int b)
    {
        cout << "Construcor called" << endl;
        name = a;
        age = b;
    }

    Human(const Human &h1)
    {
        cout << "Copy construcor Called" << endl;
        name = h1.name;
        age = h1.age;
        // cout << "I am Copy Constructor" << endl;
    }
    void displayData()
    {
        cout << "My name is: " << name << endl;
        cout << "My age is: " << age << endl;
    }
};

int main(int argc, char const *argv[])
{

    Human human1 = Human("Sandeep", 56);
    human1.displayData();
    {
        Human human2 = Human(human1);
        human2.displayData();
    }
    return 0;
}
