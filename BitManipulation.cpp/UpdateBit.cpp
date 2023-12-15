#include <iostream>
using namespace std;
int updateBit(int n, int position)
{
    return (((~ (1 << position))&n)| (1 << position));
}
int main()
{
    int n, position;
    cout << "Enter number : " << endl;
    cin >> n;
    cout << "Enter position : " << endl;
    cin >> position;
    cout << "Answer is : "<<updateBit(n, position) << endl;
    return 0;
}