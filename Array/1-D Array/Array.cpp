#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter array size :  ";
    cin >> size;
    cout << "Enter array elements : " << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "for " << i << " index = ";
        cin >> arr[i];
    }
    cout << "Array is : { ";
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " , ";
    }
    cout << arr[size - 1] << " }" << endl;
    return 0;
}