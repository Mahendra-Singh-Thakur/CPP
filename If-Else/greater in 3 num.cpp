#include <iostream>
using namespace std;
int main()
{
    int check;
    do
    {
        int num1, num2, num3;
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Enter the third number: ";
        cin >> num3;
        int largest = num1;

        if (num2 > largest)
        {
            largest = num2;
        }

        if (num3 > largest)
        {
            largest = num3;
        }
        cout << "The largest number is: " << largest << endl;
        cout << "Want to continue then enter '1' if not enter '0' " << endl;
        cin >> check;
    } while (check != 0);
    return 0;
}