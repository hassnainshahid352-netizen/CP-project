#include <iostream>
using namespace std;
int main() 
{
    int n; 
    cout<<"enter any one to three digit number"<<endl;
    cin >> n; 
    if(n > -10 && n < 10)
     cout << "1 Digit"; 
    else if(n > -100 && n < 100)
     cout << "2 Digits"; 
    else
     cout << "3 or more Digits"; 
    return 0;
}