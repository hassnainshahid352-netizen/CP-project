#include <iostream>
using namespace std;
int main() {
    string color;
    cout<<"enter color of taraffic light"<<endl; 
    cin >> color; 
    if(color == "Red") 
    cout << "Stop"<<endl;
    else if(color == "Yellow") 
    cout << "Ready"<<endl;
    else if(color == "Green") 
    cout << "Go"<<endl;
    else cout << "Invalid Color";
    return 0;
}
