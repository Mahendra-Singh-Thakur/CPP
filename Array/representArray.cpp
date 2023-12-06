#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter array {ROWS} size :  ";
    cin >> rows;
    cout << "Enter array {COLUMNS} size :  ";
    cin >> columns;
    cout << "Enter array elements : " << endl;
    int arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "for " << i << "," << j << " index = ";
            cin >> arr[i][j];
        }
    }
    cout << "2-D Array is :  " << endl;
    int i, j;
    for (int i = 0; i < columns; i++)
    {
        cout << "----";
    }
    cout <<endl;
    for (i = 0; i < rows; i++)
    {
    cout << "| " ;
        for (j = 0; j < columns - 1; j++)
        {
            cout  << arr[i][j] << " | ";
        }
        cout << arr[i][j] << " |";
        cout << endl;
        for (int i = 0; i < columns; i++)
        {
            cout << "----";
        }
        cout << endl;
    }

    return 0;
}