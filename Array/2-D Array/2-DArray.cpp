#include <iostream>
using namespace std;
int main()
{
    const int row = 6;
    const int column = 4;

    int twoDarr[row][column] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12},
                                {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "[" << i << "][" << j << "] = " << twoDarr[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}