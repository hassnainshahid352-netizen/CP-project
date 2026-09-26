#include <iostream>
using namespace std;
int main() {
    string password, confirmPassword; 
    cout << "Enter your new password: ";
    cin >> password; 
    cout << "Confirm your password: ";
    cin >> confirmPassword; 
    if(password == confirmPassword) { 
        cout << "Success! Account created successfully. Passwords match."; 
    } 
    else { 
        cout << "Error! Passwords do not match. Please try again."; 
    } 
    return 0;
}