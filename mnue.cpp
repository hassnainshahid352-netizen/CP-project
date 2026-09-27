#include <iostream>
using namespace std;

int main() {
    int itemCode;
    cout << "101: Burger (300 PKR)\n102: Pizza (1200 PKR)\n103: Fries (150 PKR)\nEnter Item Code: "<<endl;
    cin >> itemCode;
    
    switch(itemCode) {
        case 101:
            cout << "You ordered Burger. Total: 300 PKR"<<endl;
            break;
        case 102:
            cout << "You ordered Pizza. Total: 1200 PKR"<<endl;
            break;
        case 103:
            cout << "You ordered Fries. Total: 150 PKR"<<endl;
            break;
        default:
            cout << "Item not available"<<endl;
            break;
    }
    return 0;
}