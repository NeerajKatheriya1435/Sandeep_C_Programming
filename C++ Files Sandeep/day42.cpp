#include <iostream>
using namespace std;

class Base1
{

public:
    void eatFood()
    {
        cout << "Base 1 is Eating the food" << endl;
    }
    void drinkWater()
    {
        cout << "Base 1 is Drinking the water" << endl;
    }
};

class Base2
{

public:
    void drinkWater()
    {
        cout << "Base 2 is Drinking the water" << endl;
    }
};

class Combine : public Base1, public Base2
{
public:
    void drinkWater()
    {
        cout << "Combine  is Drinking the water" << endl;
    }
};

int main(int argc, char const *argv[])
{

    Combine c1;
    c1.eatFood();
    // c1.Base1::drinkWater();
    // c1.Base2::drinkWater();
    c1.drinkWater();
    return 0;
}
