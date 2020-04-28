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

	cout << "&number = " << &number << endl;
	cout << "&rnum = " << &rnum << endl;

	cout << "sizeof(char&) = " << sizeof(char&) << endl;
	cout << "sizeof(short&) = " << sizeof(short&) << endl;
	cout << "sizeof(int&) = " << sizeof(int&) << endl;
	cout << "sizeof(long&) = " << sizeof(long&) << endl;
	cout << "sizeof(float&) = " << sizeof(float&) << endl;
	cout << "sizeof(double&) = " << sizeof(double&) << endl;

	return 0;
}