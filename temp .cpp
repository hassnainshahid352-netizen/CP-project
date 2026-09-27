#include <iostream>
using namespace std;
int main() {
    int temp; 
    cout<<"enter tempurature in celcius"<<endl;
    cin >> temp;
    if(temp > 35) 
    cout << "Hot"<<endl;
    else if(temp < 15) 
    cout << "Cold"<<endl;
    else 
    cout << "Normal"<<endl;
    return 0;
}
