#include <iostream>

using namespace std;

#define MAX 10

int main()
{
	struct MEMINFO {
		char name[20];
		int salary;
	};

	MEMINFO person[MAX] = {
		{"���ǥ", 10000},
		{"�̺���", 7500},
		{"ȫ����", 6000},
	};

	MEMINFO* ptr = NULL;
	ptr = person;

	int count = 3;

	for (; count < MAX; count++)
	{
		cout << "�̸���? ";
		cin >> (ptr + count)->name;

		if (strcmp((ptr + count)->name, "end") == 0)
		{
			break;
		}

		cout << "������? ";
		cin >> (*(ptr + count)).salary;
	}

	for (; count > 0; count--)
	{
		cout << (ptr + count)->name << "�� ������ " << (*(ptr + count)).salary << "�Դϴ�." << endl;
	}

	return 0;
}