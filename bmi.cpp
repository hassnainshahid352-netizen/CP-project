#include <iostream>
using namespace std;
int main() {
    float weight, height; 
    cout<<"enter weight and height"<<endl;
    cin>> weight >> height; 
    float bmi = weight / (height *height); 
    if(bmi <= 25) cout << "Fit"; 
    else cout << "Overweight"; 
    return 0;
}