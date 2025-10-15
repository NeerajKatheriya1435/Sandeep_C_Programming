#include <iostream>
using namespace std;

class Base1
{
private:
    int age = 20;

protected:
    void setData()
    {
        cout << "My age is: " << age << endl;
        ;
    }
};

class Base2
{
private:
    int id = 101;

public:
    void setData()
    {
        cout << "My id is: " << id << endl;
    }
};

class Combine : public Base1, public Base2
{

public:
    // void funcCall()
    // {
    //     Base2::setData();
    // }
    // void setData()
    // {
    //     cout << "Hello" << endl;
    // }
};

int main(int argc, char const *argv[])
{

    Combine c1;
    // c1.funcCall();
    // c1.setData(45);
    return 0;
}
