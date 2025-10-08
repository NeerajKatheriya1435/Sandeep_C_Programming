#include <iostream>
#include <string>
using namespace std;

class Students
{
public:
    int id;
    string name;

    void displayData()
    {
        cout << "My id is: " << id << endl;
        cout << "My name is: " << name << endl;
    }

    void dataAccesSum(Students s1, Students s2);
};

void Students::dataAccesSum(Students s1, Students s2)
{
    s1.id = 5;
    cout << "The value of id1+ id2: " << (s1.id + s2.id) << endl;
};
int main()
{

    // Students s1, s2;
    // s1.id = 101;
    // s1.name = "Shivam";
    // s1.displayData();

    // cout << "------------" << endl;

    // s2.id = 102;
    // s2.name = "Sandeep";
    // s2.displayData();

    // Students std[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter your id: " << endl;
    //     cin >> std[i].id;

    //     cout << "Enter your name: " << endl;
    //     cin >> std[i].name;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "My Name is: " << std[i].name << endl;
    //     cout << "My id is: " << std[i].id << endl;
    //     cout << "----------------------" << endl;
    // }

    Students s1, s2, s3;
    s1.id = 101;
    s2.id = 102;

    s3.dataAccesSum(s1, s2);

    cout << "The value of s1.id: " << s1.id;

    return 0;
}
