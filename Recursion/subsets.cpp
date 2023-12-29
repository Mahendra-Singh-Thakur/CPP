#include <iostream>
#include <string>
using namespace std;
void subSets(string s, string ans)
{
    if (s.size() == 0)
    {
        cout << "{" << ans << "}" << endl;
        return;
    }
    subSets(s.substr(1), ans);
    subSets(s.substr(1), ans + s[0]);
    return;
}
int main()
{
    string s = "ABC";
    cout<< " String is : "<<s <<endl;
    subSets(s, "");
    return 0;
}