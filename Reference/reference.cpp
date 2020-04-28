#include <iostream>

using namespace std;

int main()
{
	int number = 0;
	// ���۷��� ������ int�� number ������ �����ϴ� ������ �ʱ�ȭ
	int& rnum = number;
	// rnum�� number�� ���� �޸� �����Ͽ� number = 10�� ����
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