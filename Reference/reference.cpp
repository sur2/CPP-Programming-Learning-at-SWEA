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

	return 0;
}