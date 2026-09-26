#include <iostream>
using namespace std;
int main() {
    int income, creditScore; 
    cout<<"enter income and credit score"<<endl;
    cin >> income >> creditScore; 
    if(income > 50000 && creditScore > 700)
    cout << "Loan Approved"<<endl;
    else 
    cout << "Loan Rejected"<<endl;
    return 0;
}