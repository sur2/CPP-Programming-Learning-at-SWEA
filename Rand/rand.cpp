#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int num = rand() % 3;

	cout << num << endl;

	switch (num)
	{
	case 0:
		cout << "������" << endl;
		break;
	case 1:
		cout << "�ƿ���" << endl;
		break;
	case 2:
		cout << "������" << endl;
		break;
	default:
		break;
	}

	return 0;
}