#include <iostream>

using namespace std;

// inline �Լ��� ȣ�� �Ǳ� �� �̸� ����
inline int square(int num)
{
	return num * num;
}

int main(void)
{
	int num;
	cout << "������ �Է��Ͻÿ� --> ";
	cin >> num;

	cout << num << " x " << num << " = " << square(num) << endl;

	return 0;
}