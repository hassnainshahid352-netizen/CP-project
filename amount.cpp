#include <iostream>
using namespace std;
int main() 
{
    int type, amount;
    cout << "Enter account type (1 for Savings, 0 for Checking): ";
    cin >> type;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    if (type == 1) {
        if (amount > 500) {
            cout << "Savings Limit Fee Applied\n";
        } else {
            cout << "No Fee\n";
        }
    } else {
        if (amount > 1000) {
            cout << "Checking Limit Fee Applied\n";
        } else {
            cout << "No Fee\n";
        }
    }
    return 0;
}
