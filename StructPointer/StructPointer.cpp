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
		{"김대표", 10000},
		{"이부장", 7500},
		{"홍과장", 6000},
	};

	MEMINFO* ptr = NULL;
	ptr = person;

	int count = 3;

	for (; count < MAX; count++)
	{
		cout << "이름은? ";
		cin >> (ptr + count)->name;

		if (strcmp((ptr + count)->name, "end") == 0)
		{
			break;
		}

		cout << "연봉은? ";
		cin >> (*(ptr + count)).salary;
	}

	for (; count > 0; count--)
	{
		cout << (ptr + count)->name << "의 연봉은 " << (*(ptr + count)).salary << "입니다." << endl;
	}

	return 0;
}