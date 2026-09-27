#include <iostream>
using namespace std;

int main() {
    int code;
    float money;
    cout << "1. Juice (50)\n2. Soda (80)\n3. Water (30)\nEnter code: "<<endl;
    cin >> code;
    cout << "Insert money: "<<endl;
    cin >> code;
    cin >> money;
    
    switch(code) {
        case 1: 
            if(money >= 50) {
                cout << "Take Juice. Change: " << money - 50<<endl;
    cin >> code;
            } else {
                cout << "Insufficient funds"<<endl;
    cin >> code;
            }
            break;
        case 2: 
            if(money >= 80) {
                cout << "Take Soda. Change: " << money - 80<<endl;
    cin >> code;
            } else {
                cout << "Insufficient funds"<<endl;
    cin >> code;
            }
            break;
        case 3: 
            if(money >= 30) {
                cout << "Take Water. Change: " << money - 30<<endl;
    cin >> code;
            } else {
                cout << "Insufficient funds"<<endl;
    cin >> code;
            }
            break;
        default:
            cout << "Invalid Code. Returning Money: " << money<<endl;
    cin >> code;
            break;
    }
    return 0;
}