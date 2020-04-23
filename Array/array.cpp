#include <iostream>

using namespace std;

#define LEN 5

int main()
{

	int number[LEN] = {};
	int i = 0, sum = 0;

	for (i = 0; i < LEN; i++)
	{
		cout << "정수를 입력하세요 --> ";
		cin >> number[i];

		sum += number[i];
	}

	cout << "sum = " << sum << endl;

	return 0;
}