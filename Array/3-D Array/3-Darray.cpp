#include <iostream>
using namespace std;
int main()
{
    const int size1 = 2;
    const int size2 = 3;
    const int size3 = 4;

    int threeDArray[size1][size2][size3] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}},
                                            {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}}};

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            for (int k = 0; k < size3; k++)
            {
                cout << "[" << i << "][" << j << "][" << k << "] = " << threeDArray[i][j][k] << endl;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}