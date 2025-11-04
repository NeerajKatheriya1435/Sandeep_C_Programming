#include <iostream>
using namespace std;

class Shape
{
public:
    void nameShape()
    {
        cout << "I am a shape what are you" << endl;
    }
    virtual void addNum() = 0;
};

class Circle : public Shape
{
public:
    void addNum()
    {
        cout << " I am adding two numbers" << endl;
    }
};

int main(int argc, char const *argv[])
{

    // Shape s1;
    Circle c1;

    c1.nameShape();
    c1.addNum();

    return 0;
}
