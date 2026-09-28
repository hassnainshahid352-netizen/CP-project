#include <iostream>
using namespace std;
int main ()
{
	int age, citizen;
	cout << "Enter age";
	cin >> age;
	cout << "Enter citizen";
	cin >> citizen;
	if(age >= 18)
	{
		if (citizen == 1)
		{
			cout << "eligible for vote\n";
		}
		else
		{
			cout << "not a citizen\n";
		}
	}
	else 
	{
		cout << "Underage\n";
	}
	return 0;
}
