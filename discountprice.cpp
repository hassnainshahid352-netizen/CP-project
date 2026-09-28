#include <iostream>
using namespace std;

int main() {
    int age, member;
    cout << "Enter age: ";
    cin >> age;
    cout << "Is member? (1 for Yes, 0 for No): ";
    cin >> member;

    if (age >= 60) {
        if (member == 1) {
            cout << "30% Discount\n";
        } else {
            cout << "20% Discount\n";
        }
    } else {
        if (member == 1) {
            cout << "10% Discount\n";
        } else {
            cout << "No Discount\n";
        }
    }
    return 0;
}
