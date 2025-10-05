#include <iostream>
using namespace std;

class ComplexNum
{
private:
    int real, imagine;

public:
    friend void myFriend(ComplexNum, ComplexNum);
    void setVal(int num1, int num2)
    {
        real = num1;
        imagine = num2;
    }
    void getVal()
    {
        cout << "The number is: " << real << "+" << imagine << "i" << endl;
    }
};

void myFriend(ComplexNum c1, ComplexNum c2)
{
    int realSum = c1.real + c2.real;
    cout << "The real part sum is: " << realSum;
};

int main(int argc, char const *argv[])
{
    ComplexNum comp1, comp2;
    comp1.setVal(4, 7);
    comp1.getVal();

    comp2.setVal(3, 9);
    comp2.getVal();
    myFriend(comp1, comp2);
    return 0;
}
