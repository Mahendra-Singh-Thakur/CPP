#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size, value;
    cout << "Enter vector size :  ";
    cin >> size;
    cout << "Enter vector elements : " << endl;
    vector<int> Vector;
    for (int i = 0; i < size; i++)
    {
        cout << "for " << i << " index = ";
        cin >> value;
        Vector.push_back(value);
    }
    cout << "Vector is : { ";
    for (int i = 0; i < size - 1; i++)
    {
        cout << Vector[i] << " , ";
    }
    cout << Vector[size - 1] << " }" << endl;
    return 0;
}