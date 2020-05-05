#include <iostream>

using namespace std;

void swap(int*, int*);

int main(void)
{
	int x, y;

	cout << "두 수를 입력하십시오 ---> ";
	cin >> x >> y;

	cout << "main x = " << x << ", y = " << y << endl;
	swap(&x, &y);
	// main의 멤버 변수 x, y의 값이 서로 바뀌어 있음
	cout << "main x = " << x << ", y = " << y << endl;

	return 0;
}

void swap(int* x, int* y)
{
	int temp = 0;

	temp = *x;
	*x = *y;
	*y = temp;

	cout << "swap x = " << *x << ", y = " << *y << endl;
}