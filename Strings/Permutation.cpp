#include <iostream>
using namespace std;

void subString(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << "\"" << ans << "\"" << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        string ros;
        ros=s.substr(0,i)+s.substr(i+1);
        subString(ros, ans + s[i]);
    }
}
int main()
{
    string s = "ABC";
    subString(s, "");
}