#include <iostream>

using namespace std;

int add(int x, int y);
int subtract(int x, int y);

int main()
{
	// calc 함수 포인터 변수 선언
	int (*calc)(int, int);

	// 함수 포인터 변수에 함수의 시작 주소를 대입
	calc = add;
	cout << calc(64, 178) << endl;

	// 함수 포인터 변수에 함수의 시작 주소를 대입
	calc = subtract;
	cout << calc(153, 98) << endl;

	return 0;
}


int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}