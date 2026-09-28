#include <iostream>
using namespace std;
int main() 
{
    int age, experience;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 18) {
        cout << "Enter experience in years: ";
        cin >> experience;

        if (experience >= 2) {
            cout << "Senior Team\n";
        } else {
            cout << "Training Team\n";
        }
    } else {
        if (age >= 12) {
            cout << "Youth Team\n";
        } else {
            cout << "Kids Team\n";
        }
    }
    return 0;
}
