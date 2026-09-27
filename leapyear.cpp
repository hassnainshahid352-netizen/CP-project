#include <iostream>
using namespace std;
int main() {
    int year; 
    cout<<"enter year"<<endl;
    cin >> year; 
    if(year % 4 == 0) 
    cout << "Leap Year"; 
    else
    cout << "Not a Leap Year"; 
    return 0;
}
