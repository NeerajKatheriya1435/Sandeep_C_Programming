#include <iostream>
using namespace std;

class Points;

class sumNum
{
public:
    void myFriends(Points p1, Points p2);
};

class Points
{
    int x, y;

public:
    // friend void sumNum::myFriends(Points, Points);
    friend class sumNum;
    void setPoints(int a, int b)
    {
        x = a;
        y = b;
    }
    void getPoints()
    {
        cout << "The point is: (" << x << "," << y << ")" << endl;
    }
};

void sumNum::myFriends(Points p1, Points p2)
{
    int sumN = p1.x + p2.x;
    cout << "The sum is: " << sumN;
};

int main(int argc, char const *argv[])
{

    Points p1, p2;
    p1.setPoints(5, 8);
    p2.setPoints(3, 2);

    p1.getPoints();
    p2.getPoints();

    sumNum s1;
    s1.myFriends(p1, p2);
    return 0;
}
