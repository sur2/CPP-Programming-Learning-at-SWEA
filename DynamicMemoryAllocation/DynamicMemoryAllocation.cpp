#include <iostream>

using namespace std;

int main()
{
	int size = 0;

	cout << "�迭�� ũ��� ? ";
	cin >> size;
	
	// �޸� ���� �Ҵ�
	int* p = new int[size];
	if (p == NULL)
	{
		cout << "�޸� �Ҵ� ���� : int[" << size << "]" << endl;
		return 1;
	}
	double* dp = new double[size];
	if (dp == NULL)
	{
		cout << "�޸� �Ҵ� ���� : double[" << size << "]" << endl;
		return 1;
	}
	cout << "���� " << size << "���� �Է��ϼ���. " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}

	cout << "�Ǽ� " << size << "���� �Է��ϼ���. " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> dp[i];
	}

	cout << "�Է¹��� ���� ������ �����ϴ�. " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "*(p + " << i << ") = " << *(p + i);
		cout << " , *(dp + " << i << ") = " << *(dp + i) << endl;
	}

	// ���� �޸� ����
	delete[] p;
	p = NULL;
	delete[] dp;
	dp = NULL;

	return 0;
}