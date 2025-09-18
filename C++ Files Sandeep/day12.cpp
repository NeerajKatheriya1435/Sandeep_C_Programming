#include <iostream>
using namespace std;

struct Student
{
    int age;
    float wieght;
    double fee;
};

int main()
{

    struct Student std1, std2;

    std1.age = 23;
    std1.wieght = 67.78f;
    std1.fee = 20000.90;

    std2.age = 24;
    std2.wieght = 34.78f;
    std2.fee = 22000.00;

    cout << "The wieght of std1 is: " << std1.age << endl;
    cout << "The wieght of std2 is: " << std2.age << endl;

    cout << "The wieght of std1 is: " << std1.wieght << endl;
    cout << "The wieght of std2 is: " << std2.wieght << endl;

    cout << "The wieght of std1 is: " << std1.fee << endl;
    cout << "The wieght of std2 is: " << std2.fee << endl;
    return 0;
}
