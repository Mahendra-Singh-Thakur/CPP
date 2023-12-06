#include <iostream>
using namespace std;
int main()
{
    int check;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << number << " is an even number." << endl;
    }
    if (number % 2 != 0)
    {
        cout << number << " is an odd number." << endl;
    }

    return 0;
}