#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (is_prime(num))
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}