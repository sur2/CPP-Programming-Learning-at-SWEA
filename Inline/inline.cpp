#include <iostream>

using namespace std;

// inline 함수는 호출 되기 전 미리 선언
inline int square(int num)
{
	return num * num;
}

int main(void)
{
	int num;
	cout << "정수를 입력하시오 --> ";
	cin >> num;

	cout << num << " x " << num << " = " << square(num) << endl;

	return 0;
}