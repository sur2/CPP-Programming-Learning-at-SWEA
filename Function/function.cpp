#include <iostream>

using namespace std;

// �Լ� ����
void TestFunc(int);

int main(void)
{
	cout << "main function start" << endl;

	// �Լ� ȣ��
	TestFunc(10);

	cout << "main function end" << endl;

	return 0;
}
// �Լ� ����
void TestFunc(int num) 
{
	cout << "TestFunc : num = " << num << endl;
}