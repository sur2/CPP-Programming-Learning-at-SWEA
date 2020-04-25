#include <iostream>

using namespace std;

int main()
{
	int size = 0;

	cout << "배열의 크기는 ? ";
	cin >> size;
	
	// 메모리 동적 할당
	int* p = new int[size];
	if (p == NULL)
	{
		cout << "메모리 할당 실패 : int[" << size << "]" << endl;
		return 1;
	}
	double* dp = new double[size];
	if (dp == NULL)
	{
		cout << "메모리 할당 실패 : double[" << size << "]" << endl;
		return 1;
	}
	cout << "정수 " << size << "개를 입력하세요. " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}

	cout << "실수 " << size << "개를 입력하세요. " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> dp[i];
	}

	cout << "입력받은 수는 다음과 같습니다. " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "*(p + " << i << ") = " << *(p + i);
		cout << " , *(dp + " << i << ") = " << *(dp + i) << endl;
	}

	// 동적 메모리 해제
	delete[] p;
	p = NULL;
	delete[] dp;
	dp = NULL;

	return 0;
}