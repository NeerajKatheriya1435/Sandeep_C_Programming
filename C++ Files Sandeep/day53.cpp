// #include <iostream>
// #include <fstream>
// // #include <ofstream>

// using namespace std;
// int main(int argc, char const *argv[])
// {
// fstream file1;
// file1.open("sample.txt", ios ::in | ios ::out);

// File creation and writing the data

// ofstream file1;
// file1.open("Sample.txt");
// file1 << "My name is Neeraj Katheriya \n";
// file1 << "My age is 45";
// cout << "Data Written Successfully!!" << endl;
// file1.close();

// Reading a file

// ifstream file2;
// file2.open("Sample.txt");
// string line;

// if (!file2)
// {
//     cout << "File Not Found !!!" << endl;
// }
// else
// {
//     // getline(file2, line);
//     // cout << line << endl;
//     // getline(file2, line);
//     // cout << line << endl;
//     while (getline(file2, line))
//     {
//         cout << line << endl;
//     }
// }

// Update the data

// ofstream file1;
// file1.open("Sample.txt", ios::app);
// file1 << "My1 name is Neeraj Katheriya \n";
// file1 << "My1 age is 45 \n";
// cout << "Data Written Successfully!!" << endl;
// file1.close();

// return 0;
// }
// Update

// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// int main()
// {
//     string line, content = "";
//     ifstream fin("Sample.txt");

//     while (getline(fin, line))
//     {
//         if (line == "My1 age is 45 ")
//             line = "I bolongs to";
//         content += line + "\n";
//     }
//     fin.close();

//     ofstream fout("Sample.txt");
//     fout << content;
//     fout.close();

//     cout << "File updated successfully!\n";
//     return 0;
// }

// #include <iostream>
// #include <cstdio> // for remove()
// using namespace std;

// int main()
// {
//     if (remove("Sample.txt") == 0)
//         cout << "File deleted successfully!\n";
//     else
//         cout << "Error deleting the file!\n";
//     return 0;
// }
