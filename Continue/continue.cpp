#include <iostream>

using namespace std;

int main()
{
	// 0 ~ 9까지 중 5를 제외하고 출력
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		cout << i << endl;
	}

	return 0;
}