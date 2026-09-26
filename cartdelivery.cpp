#include <iostream>
using namespace std;
int main() {
    int cartTotal; 
    cout << "Enter your cart total amount: ";
    cin >> cartTotal; 
    if(cartTotal >= 2000) { 
        cout << "Congratulations! You qualify for FREE Delivery.\n";
        cout << "Your final bill is: " << cartTotal << " PKR"; 
    } 
    else { 
        cout << "A delivery fee of 200 PKR has been applied.\n";
        cout << "Your final bill is: " << cartTotal + 200 << " PKR"; 
    } 
    return 0;
}