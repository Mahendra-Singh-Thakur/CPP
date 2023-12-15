#include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout << "Enter the first number: A = ";
    cin >> num1;

    cout << "Enter the second number: B = ";
    cin >> num2;

    cout << "Before swapping: " << endl;
    cout << "First number: A = " << num1 << endl;
    cout << "Second number: B = " << num2 << endl;

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    cout << "After swapping: " << endl;
    cout << "First number: A = " << num1 << endl;
    cout << "Second number: B = " << num2 << endl;

    return 0;
}