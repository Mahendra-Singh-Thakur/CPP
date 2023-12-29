#include <iostream>
using namespace std;

class pen
{
public:
    string colour;
    string type;
    int cost;
    pen()
    {
        cout << "Constructor called" << endl;
        colour = "";
        type = "";
        cost = 0;
    }
    ~pen()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    pen pen1;
    cout << "Enter the Colour of pen : ";
    cin >> pen1.colour;
    cout << "Enter the type of pen : ";
    cin >> pen1.type;
    cout << "Enter the Cost of pen : $";
    cin >> pen1.cost;
    cout << "The Colour of pen is : " << pen1.colour << endl;
    cout << "The Type of pen is : " << pen1.type << endl;
    cout << "The Cost of pen is : $" << pen1.cost << endl;
    return 0;
}