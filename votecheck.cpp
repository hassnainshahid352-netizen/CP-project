#include <iostream>
using namespace std;
int main() {
    int age; 
    cout<<"enter age to check for voting:"<<endl;
    cin >> age; 
    if(age >= 18) 
    {
    cout << "Eligible"<<endl;
    }
    else
    {
    cout << "Not Eligible"<<endl;
    }
    return 0;
}