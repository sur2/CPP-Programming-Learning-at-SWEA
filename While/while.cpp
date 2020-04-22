#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	int sum = 0;
	cout << "number? ";
	cin >> number;
	while (number != -1)
	{
		sum = sum + number;
		cout << "number? ";
		cin >> number;
	}
	cout << sum << endl;
	return 0;
}