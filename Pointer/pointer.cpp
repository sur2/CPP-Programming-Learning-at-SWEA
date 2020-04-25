#include <iostream>

using namespace std;

#define MAX 5

int main()
{
	int num[MAX], * p;
	double dnum[MAX], * dp;

	// 배열명은 배열의 첫 번째 주소를 가리킴
	p = num;
	dp = dnum;

	cout << "정수 5개를 입력하세요. " << endl;
	for (int i = 0; i < MAX; i++)
	{
		cin >> p[i];
	}

	cout << "실수 5개를 입력하세요. " << endl;
	for (int i = 0; i < MAX; i++)
	{
		cin >> dp[i];
	}

	cout << "입력받은 수는 다음과 같습니다. " << endl;

	for (int i = 0; i < MAX; i++)
	{
		cout << "*(p + " << i << ") = " << *(p + i);
		cout << " , *(dp + " << i << ") = " << *(dp + i) << endl;
	}

	return 0;
}