#include <iostream>

using namespace std;

int main()
{
	int number = 0, sum = 0;

	do
	{
		sum += number;
		cout << "number? ";
		cin >> number;
	} while (number != -1);
	cout << sum << endl;

	return 0;
}