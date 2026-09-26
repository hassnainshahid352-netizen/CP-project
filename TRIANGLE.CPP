#include <iostream>
using namespace std;
int main() {
    int a, b, c; 
    cout<<"enter three agles of triangle"<<endl;
    cin >> a >> b >> c; 
    if(a + b + c == 180)
    cout << "Valid Triangle"<<endl;
    else 
    cout << "Invalid Triangle"<<endl;

    return 0;
}