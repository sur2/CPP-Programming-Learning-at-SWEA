#include <iostream>

using namespace std;

int main()
{
	int num = 0, sum = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "num? ";
		cin >> num;
		sum += num;
	}

	cout << sum << endl;

	return 0;
}