#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << "Before sort : " << s << endl;
    sort(s.begin(), s.end());
    cout << "After sort  : " << s << endl;
    return 0;
}