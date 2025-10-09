#include <iostream>
using namespace std;

// Real Part + Imaginary Part
// 4+6i
// 7+3i
//-------
// 11+9i

class ComplexNum
{
private:
    int real, imagine;

public:
    friend ComplexNum AddTwoComplexNumber(ComplexNum c1, ComplexNum c2);
    void setData(int a, int b)
    {
        real = a;
        imagine = b;
    }
    void displayData()
    {
        cout << "Complex Number is: " << real << "+" << imagine << "i" << endl;
    }
    // void addTwoNum(int a1, int b1);
};

// void addTwoNum(int a1, int b1)
// {
//     cout << "The sum of number is: " << (a1 + b1) << endl;
//     cout << "The real number is: " << real << endl;
// }

ComplexNum AddTwoComplexNumber(ComplexNum c1, ComplexNum c2)
{
    ComplexNum s3;
    s3.real = c1.real + c2.real;
    s3.imagine = c1.imagine + c2.imagine;
    return s3;
}

int main()
{

    ComplexNum c1, c2, c3;
    c1.setData(4, 7);
    c2.setData(2, 5);

    c1.displayData();
    c2.displayData();

    c3 = AddTwoComplexNumber(c1, c2);
    c3.displayData();

    // addTwoNum(3, 7);

    return 0;
}
