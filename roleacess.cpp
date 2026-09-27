#include <iostream>
using namespace std;

int main() {
    char role;
    cout << "Enter Role (A for Admin, E for Editor, V for Viewer): "<<endl;
    cin >> role;
    
    switch(role) {
        case 'A':
            cout << "Full Access: Can Add, Edit, Delete."<<endl;
            break;
        case 'E':
            cout << "Partial Access: Can Add and Edit."<<endl;
            break;
        case 'V':
            cout << "Read-Only Access: Can only View."<<endl;
            break;
        default:
            cout << "Access Denied."<<endl;
            break;
    }
    return 0;
}