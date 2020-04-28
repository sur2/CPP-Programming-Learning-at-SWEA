#include <iostream>

using namespace std;

int add(int x, int y);
int subtract(int x, int y);

int main()
{
	// calc �Լ� ������ ���� ����
	int (*calc)(int, int);

	// �Լ� ������ ������ �Լ��� ���� �ּҸ� ����
	calc = add;
	cout << calc(64, 178) << endl;

	// �Լ� ������ ������ �Լ��� ���� �ּҸ� ����
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