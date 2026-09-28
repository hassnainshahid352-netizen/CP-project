#include <iostream>
using namespace std;

int main() 
{
    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;
    if (marks >= 40) {
        if (marks >= 75) {
            cout << "Passed with Distinction\n";
        } else {
            cout << "Passed\n";
        }
    } else {
        cout << "Failed\n";
    }
    return 0;
}
