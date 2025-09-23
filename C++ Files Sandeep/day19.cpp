#include <iostream>
using namespace std;

int glob = 56;

int varfunc()
{
    int a = 8;
    // cout << a << endl;
    cout << "Access from function varFunc: " << glob << endl;
    return a;
}
int main(int argc, char const *argv[])
{

    {
        // int b = 78;
        // cout << b << endl;
        cout << "Access from block: " << glob << endl;
    }
    // cout << b << endl;
    // varfunc();
    // cout << a << endl;
    varfunc();

    cout << "Access in main varFunc: " << glob << endl;

    return 0;
}
