#include <iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
    if(n==0)
    {
        return 0;
    }
    return (((n)&(n-1))==0);
}
int main()
{
    int n;
    cout << "Enter number : " << endl;
    cin >> n;
    if (isPowerOfTwo(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}