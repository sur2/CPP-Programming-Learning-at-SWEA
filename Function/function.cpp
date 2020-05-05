#include <iostream>

using namespace std;

// 함수 선언
void TestFunc(int);

int main(void)
{
	cout << "main function start" << endl;

	// 함수 호출
	TestFunc(10);

	cout << "main function end" << endl;

	return 0;
}
// 함수 정의
void TestFunc(int num) 
{
	cout << "TestFunc : num = " << num << endl;
}