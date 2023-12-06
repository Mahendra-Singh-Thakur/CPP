#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int check;
    do
    {
        int num;
        cout << "Enter a non-negative integer: ";
        cin >> num;
        if (num < 0)
        {
            cout << "Factorial is not defined for negative numbers." << endl;
        }
        else
        {
            cout << "Factorial of " << num << " is: " << factorial(num) << endl;
        }
        cout << "Want to continue then enter '1' if not then enter '0' " << endl;
        cin >> check;
    } while (check != 0);
    
    return 0;
}