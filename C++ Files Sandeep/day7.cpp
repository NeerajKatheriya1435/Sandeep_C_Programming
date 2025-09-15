#include <iostream>
using namespace std;

int main()
{

    int button;
    cout << "Enter the number for button (1-5)" << endl;
    cin >> button;

    switch (button)
    {
    case 1:
        cout << "Fan is ruuning" << endl;
        break;
    case 2:
        cout << "Ac is ruuning" << endl;
        break;
    case 3:
        cout << "Exhaust is ruuning" << endl;
        break;
    case 4:
        cout << "Tv is On" << endl;
        break;
    case 5:
        cout << "Everthing is On" << endl;
        break;
    default:
        cout << "Plaese enter between 1 to 5" << endl;
        break;
    }
    return 0;
}
