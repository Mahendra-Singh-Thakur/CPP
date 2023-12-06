#include <iostream>
using namespace std;

int main()
{
    bool check;
    do
    {
        int table;
        cout << "Enter number to print the table of that number : ";
        cin >> table;
        for (int i = 1; i <= 10; i++)
        {
            cout << table << " * " << i << " = " << table * i << endl;
        }
        cout << "Print more table then enter '1' if not then '0'" << endl;
        cin >> check;
    } while (check != 0);

    return 0;
}