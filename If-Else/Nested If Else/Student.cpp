#include <iostream>
using namespace std;
int main() {
    int age;
    bool isStudent;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you a student? (1 for yes, 0 for no): ";
    cin >> isStudent;

    if (age >= 18) {
        cout << "You are an adult." << endl;

        if (isStudent) {
            cout << "You are a student." << endl;
        } else {
            cout << "You are not a student." << endl;
        }
    } else {
        cout << "You are a minor." << endl;
    }

    return 0;
}
