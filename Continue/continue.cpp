#include <iostream>

using namespace std;

int main()
{
	// 0 ~ 9���� �� 5�� �����ϰ� ���
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