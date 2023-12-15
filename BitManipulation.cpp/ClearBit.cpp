#include <iostream>
using namespace std;
int clearBit(int n, int position)
{
    return (~(1 << position)) & n;
}
int main()
{
    int n, position;
    cout << "Enter number : " << endl;
    cin >> n;
    cout << "Enter position : " << endl;
    cin >> position;
    cout << "Bit is : " << clearBit(n, position) << endl;
    return 0;
}