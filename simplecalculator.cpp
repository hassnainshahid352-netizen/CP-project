#include <iostream>
using namespace std;
int main() {
    float a, b; 
    char op; 
    cout<<"enter number ,operation and number"<<endl;
    cin >> a >> op >> b; 
    if(op == '+') 
    cout << a + b; 
    else if(op == '-') 
    cout << a - b; 
    else if(op == '*') 
    cout << a * b; 
    else if(op == '/') 
    cout << a / b; 
    else
    cout << "Invalid Operator";
    return 0;

}