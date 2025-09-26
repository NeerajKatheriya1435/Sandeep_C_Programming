#include <iostream>
using namespace std;

// 1 1 2 3 5 8
int fibb(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return fibb(num - 2) + fibb(num - 1);
    }
}

int main(int argc, char const *argv[])
{
    int num1;
    cout << "Enter the value of series: " << endl;
    cin >> num1;

    for (int i = 0; i < num1; i++)
    {
        cout << fibb(i) << " ";
    }

    return 0;
}
