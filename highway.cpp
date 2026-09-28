#include <iostream>
using namespace std;
int main() 
{
    int road, speed;
    cout << "Enter road type (1 for Highway, 0 for City): ";
    cin >> road;
    cout << "Enter speed: ";
    cin >> speed;
    if (road == 1) {
        if (speed > 100) {
            cout << "Highway Speeding Fine\n";
        } else {
            cout << "Normal Speed\n";
        }
    } else {
        if (speed > 50) {
            cout << "City Speeding Fine\n";
        } else {
            cout << "Normal Speed\n";
        }
    }
    return 0;
}
