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

	int count = 3, i = 0;

	for (i = count; i < MAX; i++)
	{
		cout << "�̸���? ";
		cin >> person[i].name;
		// �� ���ڿ��� ������ 0�� ��ȯ
		if (strcmp(person[i].name, "end") == 0)
		{
			break;
		}

		cout << "������? ";
		cin >> person[i].salary;
		count++;
	}

	for (i = 0; i < count; i++)
	{
		cout << person[i].name << "�� ������" << person[i].salary << "�Դϴ�." << endl;
	}

	return 0;
}