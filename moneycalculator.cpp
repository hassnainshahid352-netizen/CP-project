#include <iostream>
using namespace std;

int main() {
    int choice;
    float pkr;
    cout << "Enter amount in PKR: "<<endl;
    cin >> pkr;
    cout << "Convert to:\n1. USD\n2. EUR\n3. GBP\n4. AED\nEnter choice: "<<endl;
    cin >> pkr;
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << pkr / 278.0 << " USD"<<endl;
    cin >> pkr;
            break;
        case 2:
            cout << pkr / 300.0 << " EUR"<<endl;
    cin >> pkr;
            break;
        case 3:
            cout << pkr / 350.0 << " GBP"<<endl;
    cin >> pkr;
            break;
        case 4:
            cout << pkr / 75.0 << " AED"<<endl;
    cin >> pkr;
            break;
        default:
            cout << "Invalid Currency Choice"<<endl;
    cin >> pkr;
            break;
    }
    return 0;
}