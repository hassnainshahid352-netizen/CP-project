#include <iostream>
using namespace std;
int main() {
    char c; 
    cout<<"enter alphabet"<<endl;
    cin >> c; 
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
    {
    cout << "Alphabet";} 
    else
    {
    cout << "Not an Alphabet";} 
    return 0;
}
