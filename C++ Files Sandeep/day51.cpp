#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    Point operator-(Point p)
    {
        cout << "x = " << p.x << ", y = " << p.y << endl;
        return Point(x - p.x, y - p.y);
    }
};

int main()
{
    Point p1(2, 3), p2(3, 4);
    Point p3 = p1 - p2; // uses overloaded +
    cout << "x = " << p3.x << ", y = " << p3.y << endl;
    return 0;
}
