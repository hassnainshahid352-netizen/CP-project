#include <iostream>
using namespace std;
int main() {
    int units; 
    cout<<"enter cumsumed units"<<endl;
    cin >> units; 
    if(units <= 100) 
    cout << "Bill: " << units * 5<<endl; 
    else if(units <= 200) 
    cout << "Bill: " << (100 * 5) + ((units - 100) * 10)<<endl; 
    else 
    cout << "Bill: " << (100 * 5) + (100 * 10) + ((units - 200) * 15)<<endl;
    return 0;
}
