#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month (1-12): "<<endl;
    cin >> month;
    
    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 Days"<<endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 Days"<<endl;
            break;
        case 2:
            cout << "28 or 29 Days"<<endl;
            break;
        default:
            cout << "Invalid Month"<<endl;
            break;
    }
    return 0;
}