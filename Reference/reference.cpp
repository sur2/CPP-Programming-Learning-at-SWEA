#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	// 레퍼런스 변수가 int형 number 변수를 참조하는 것으로 초기화
	int& rnum = number;
	// rnum은 number와 같은 메모리 참조하여 number = 10과 같음
	rnum = 10;

	cout << "number = " << number << endl;
	cout << "reference = " << rnum << endl;

	return 0;
}