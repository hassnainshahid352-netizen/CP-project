#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three sides: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b) {
            if (b == c) {
                cout << "Equilateral Triangle\n";
            } else {
                cout << "Isosceles Triangle\n";
            }
        } else {
            if (b == c || a == c) {
                cout << "Isosceles Triangle\n";
            } else {
                cout << "Scalene Triangle\n";
            }
        }
    } else {
        cout << "Invalid Triangle\n";
    }
    return 0;
}
