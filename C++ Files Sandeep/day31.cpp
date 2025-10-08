#include <iostream>
using namespace std;

class Sandeep
{
private:
    int adhaar = 111;
    int instgramFollwers = 200;

public:
    void displayData()
    {
        cout << "Adhaar Number is: " << adhaar << endl;
        cout << "Instgram Follwers Number is: " << instgramFollwers << endl;
    }
    friend void atulFunc(Sandeep s1, Sandeep s2);
};

void atulFunc(Sandeep s1, Sandeep s2)
{
    s1.adhaar = 56;
    s1.instgramFollwers = 78;
    cout << "Adhaar Number is: " << s1.adhaar << endl;
    cout << "Instgram Follwers Number is: " << s1.instgramFollwers << endl;
}

int main(int argc, char const *argv[])
{
    Sandeep s1, s2;
    s1.displayData();
    s2.displayData();

    atulFunc(s1, s2);
    s1.displayData();
    s2.displayData();

    return 0;
}
