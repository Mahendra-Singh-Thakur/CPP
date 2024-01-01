#include <iostream>
using namespace std;

void subString(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << "\"" << ans << "\"" << endl;
        return;
    }
    subString(s.substr(1), ans);
    subString(s.substr(1), ans + s[0]);
}
int main()
{
    string s = "ABC";
    subString(s, "");
}