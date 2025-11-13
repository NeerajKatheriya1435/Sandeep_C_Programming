#include <iostream>
using namespace std;

int main()
{
    int a = 8;
    int *ptr = new int[5];
    ptr[0] = 3;
    ptr[1] = 90;
    ptr[2] = 56;
    ptr[3] = 36;
    ptr[4] = 16;

    cout << (*ptr) << endl;
    cout << (*(ptr + 1)) << endl;
    cout << (*(ptr + 2)) << endl;
    return 0;
}

// "Print to console" : {
//     "prefix" : "main2",
//     "body" : [
//         "#include <iostream>",
//         "using namespace std;\n",
//         "int main()",
//         "{",
//         "\t$0",
//         "\treturn 0;",
//         "}"
//     ],
//     "description" : "Log output to console"
// }