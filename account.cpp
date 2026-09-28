#include <iostream>
using namespace std;

int main() {
    int account, pin;
    cout << "Enter Account Number: ";
    cin >> account;
    cout << "Enter PIN: ";
    cin >> pin;

    if (account == 101) {
        if (pin == 1234) {
            cout << "Access Granted\n";
        } else {
            cout << "Wrong PIN\n";
        }
    } else {
        cout << "Wrong Account\n";
    }
    return 0;
}
