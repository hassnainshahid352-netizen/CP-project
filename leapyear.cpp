#include <iostream>
using namespace std;

int main() 
{
    int year;
    cout << "Enter year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Leap Year\n";
            } else {
                cout << "Not a Leap Year\n";
            }
        } else {
            cout << "Leap Year\n";
        }
    } else {
        cout << "Not a Leap Year\n";
    }
    return 0;
}
