#include <iostream>
using namespace std;
int main() 
{
    int income, score, debt;
    cout << "Enter annual income: ";
    cin >> income;
    if (income > 50000) {
        cout << "Enter credit score: ";
        cin >> score;
        if (score > 700) {
            cout << "Enter current debt: ";
            cin >> debt;
            if (debt < 10000) {
                cout << "Loan Approved\n";
            } else {
                cout << "Rejected: High Debt\n";
            }
        } else {
            cout << "Rejected: Low Credit Score\n";
        }
    } else {
        cout << "Rejected: Low Income\n";
    }
    return 0;
}
