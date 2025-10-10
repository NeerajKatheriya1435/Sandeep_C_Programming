#include <iostream>
using namespace std;

class Human
{
    string name;
    int age;

public:
    Human() {}
    Human(string a, int b)
    {
        name = a;
        age = b;
    }
    void displayData()
    {
        cout << "My name is: " << name << endl;
        cout << "My age is: " << age << endl;
    }
};

int main(int argc, char const *argv[])
{
    // Constructor and Destructor || static Variables and static function

    // Human h1("Sandeep Kumar", 34); //implicit constructor
    // Human h2;
    // h1.displayData();

    // Human s1 = Human();
    // s1.displayData();
    // Human s2 = Human("Shivam Kumar", 45); // eplicit constructor
    // s2.displayData();

    string s1;
    int age;

    cout << "Enter the value of name: " << endl;
    cin >> s1;
    cout << "Enter the age of name: " << endl;
    cin >> age;

    Human g1 = Human(s1, age);
    g1.displayData();
    return 0;
}
