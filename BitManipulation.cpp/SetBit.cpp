#include <iostream>
using namespace std;
int setBit(int n, int position)
{
    return (n | (1 << position));
}
int main()
{
    int n, position;
    cout << "Enter number : " << endl;
    cin >> n;
    cout << "Enter position : " << endl;
    cin >> position;
    cout << "Answer is : "<<setBit(n, position) << endl;
    return 0;
}