#include <iostream>
using namespace std;
int main() 
{
    int bill, party;
    cout << "Enter bill amount: ";
    cin >> bill;
    cout << "Enter party size: ";
    cin >> party;
    if (bill > 200) {
        if (party > 4) {
            cout << "15% Service Charge Applied\n";
        } else {
            cout << "10% Service Charge Applied\n";
        }
    } else {
        cout << "No Extra Charge\n";
    }
    return 0;
}
