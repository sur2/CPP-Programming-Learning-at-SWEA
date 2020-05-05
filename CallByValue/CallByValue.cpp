#include <iostream>

using namespace std;

void swap(int, int);

int main(void)
{
	int x, y;

	cout << "두 수를 입력하십시오 ---> ";
	cin >> x >> y;

	cout << "main x = " << x << ", y = " << y << endl;
	
	swap(x, y);

	return 0;
}

void swap(int x, int y)
{
	int temp = 0;

	temp = x;
	x = y;
	y = temp;

	cout << "swap x = " << x << ", y = " << y << endl;
}