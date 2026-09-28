#include <iostream>
using namespace std;
int main() 
{
    int temp, ac;
    cout << "Enter temperature: ";
    cin >> temp;
    cout << "Is AC ON? (1 for Yes, 0 for No): ";
    cin >> ac;
    if (ac == 1) {
        if (temp > 30) {
            cout << "AC High Load Alert\n";
        } else {
            cout << "AC Normal\n";
        }
    } else {
        if (temp > 35) {
            cout << "High Temperature Alert\n";
        } else {
            cout << "Temperature Normal\n";
        }
    }
    return 0;
}
