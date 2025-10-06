#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{

    // 1 dimentional array
    // int arr[] = {45, 34, 65, 42};

    // access the elements
    // cout << arr[3];

    // creating a two-D array

    // int twodArr[][4] = {{1, 3, 5},
    //                     {4, 7, 8, 78}};
    // cout << twodArr[1][3] << endl;

    // char name[2]={'s','a'};
    // char name[] = "Sandeep Kumar";
    // cout << name;
    // puts(name);
    // char str1[20] = "Suman";

    // cout << "The length of string is: " << strlen(name) << endl;

    // strcpy(str1, name);

    // cout << str1 << endl;
    // strcat(str1, name);
    // cout << str1 << endl;

    string str1 = "Suman Kumar";
    string str2 = "Aman";
    string str3 = "Kumar";
    // cout << str1 << endl;
    // cout << "The length of str is: " << str1.length() << endl;
    // cout << str2.append(str3);
    // cout << str2.at(2);
    // cout << str2.empty();
    cout << str1.substr(0, 4);
    return 0;
}
