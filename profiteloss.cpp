#include <iostream>
using namespace std;
int main() {
    int cost, sell;
     cout<<"enter cost and sell price:"<<endl;
    cin >> cost >> sell; 
    if(sell > cost)
     {
        cout << "Profit"<<endl;
     } 
    else
    { 
        cout << "Loss"<<endl;
    }
    return 0;
}
