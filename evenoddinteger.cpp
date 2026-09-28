#include <iostream>
using namespace std;
int main ()
{
	int a;
	cout << "Enter the integer: ";
	cin >> a;
	if (a>0)
	{
		if (a % 2 == 0)
		{
		cout << "Positive and Even\n";
		}
		else
		{
			cout << "Positive and odd\n";
		}
	}
		else
		{
			cout << "Not a positive\n";
		}
	return 0;	
}
