#include <iostream>
using namespace std;
int main() 
{
    int level, coins;
    cout << "Enter level: ";
    cin >> level;
    cout << "Enter coins: ";
    cin >> coins;
    if (level >= 5) {
        if (coins >= 50) {
            cout << "Special Stage Unlocked\n";
        } else {
            cout << "Need More Coins\n";
        }
    } else {
        cout << "Level Too Low\n";
    }
    return 0;
}
