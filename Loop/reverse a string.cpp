#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userString;
    cout << "Enter a string: ";
    getline(cin, userString);
    cout << "Original string: " << userString << endl;

    string reversedString = "";
    for (int i = userString.length() - 1; i >= 0; i--)
    {
        reversedString += userString[i];
    }

    cout << "Reversed string: " << reversedString << endl;

    return 0;
}

// one more approach

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string String;
//     cout << "Enter a string: ";
//     getline(cin, String);
//     cout << "Before reversing a string : " << String << endl;
//     char ch;
//     cout << String.size() << endl;
//     cout << String[String.size()] << endl;
//     for (int i = 0; i < ((String.size()) / 2); i++)
//     {
//         ch = String[i];
//         String[i] = String[(String.size() - 1) - i];
//         String[(String.size() - 1) - i] = ch;
//     }
//     cout << "After reversing a string : " << String << endl;
//     return 0;
// }