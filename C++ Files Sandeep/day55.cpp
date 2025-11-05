// #include <iostream>
// using namespace std;

// template <class T>
// class Calculator
// {
// public:
//     T add(T a, T b)
//     {
//         return a + b;
//     }
//     T multiply(T a, T b)
//     {
//         return a * b;
//     }
// };

// int main()
// {
//     Calculator<int> c1;

//     Calculator<float> c2;

//     cout << c1.add(5, 10) << endl;
//     cout << c2.multiply(2.5, 4.5) << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

template <class T1, class T2>
class Pair
{
public:
    T1 first;
    T2 second;

    Pair(T1 a, T2 b)
    {
        first = a;
        second = b;
    }

    void display()
    {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main()
{
    Pair<int, double> p1(10, 20.5);
    Pair<string, int> p2("Age", 23);

    p1.display();
    p2.display();
    return 0;
}
