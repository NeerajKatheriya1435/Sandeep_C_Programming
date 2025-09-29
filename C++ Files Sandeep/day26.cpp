#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // char name[] = {'S', 'a', 'n', 'd', 'e', 'e', 'p', '\0'};
    char name[] = "Sandeep";
    // puts(name);
    // cout << name << endl;

    for (int i = 0; name[i] != '\0'; i++)
    {
        cout << name[i] << endl;
    }

    return 0;
}
