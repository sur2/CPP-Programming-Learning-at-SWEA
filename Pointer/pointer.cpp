#include <iostream>

using namespace std;

#define MAX 5

int main()
{
	int num[MAX], * p;
	double dnum[MAX], * dp;

	// �迭���� �迭�� ù ��° �ּҸ� ����Ŵ
	p = num;
	dp = dnum;

	cout << "���� 5���� �Է��ϼ���. " << endl;
	for (int i = 0; i < MAX; i++)
	{
		cin >> p[i];
	}

	cout << "�Ǽ� 5���� �Է��ϼ���. " << endl;
	for (int i = 0; i < MAX; i++)
	{
		cin >> dp[i];
	}

	cout << "�Է¹��� ���� ������ �����ϴ�. " << endl;

	for (int i = 0; i < MAX; i++)
	{
		cout << "*(p + " << i << ") = " << *(p + i);
		cout << " , *(dp + " << i << ") = " << *(dp + i) << endl;
	}

	return 0;
}