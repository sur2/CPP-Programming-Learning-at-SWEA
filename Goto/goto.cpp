#include <iostream>

using namespace std;

int main()
{
	int num1;
	cout << "1 �Ǵ� 2�� �Է��ϼ���. ";
	cin >> num1;

	if (num1 == 1)         // num1�� 1�̸�
		goto ONE;          // ���̺� ONE���� ��� �̵�
	else if (num1 == 2)    // num1�� 2�̸�
		goto TWO;          // ���̺� TWO�� ��� �̵�
	else                   // 1�� �ƴϰ� 2�� �ƴϸ�
		goto EXIT;         // ���̺� EXIT�� ��� �̵�

ONE:    // ���̺� ONE
	printf("1�Դϴ�.\n");
	goto EXIT; // ���̺� EXIT�� ��� �̵�

TWO:    // ���̺� TWO
	printf("2�Դϴ�.\n");
	goto EXIT; // ���̺� EXIT�� ��� �̵�

EXIT:    // ���̺� EXIT
	return 0;
}