#include <iostream>
using namespace std;
bool getBit(int n, int position)
{
    return ((n & (1 << position)) != 0);
}
int main()
{
    int n, position;
    cout << "Enter number : " << endl;
    cin >> n;
    cout << "Enter position : " << endl;
    cin >> position;
    cout << "Bit is : "<<getBit(n, position) << endl;
    return 0;
}