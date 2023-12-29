#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    cout<< "s[first INDEX] = \""<<s[0] <<"\""<<endl;
    cout<< "s[last INDEX -1] = \""<<s[s.size()-1] <<"\""<<endl;
    cout<< "s[last INDEX] = \""<<s[s.size()] <<"\""<<endl;
    cout<< s <<endl;
    return 0;
}