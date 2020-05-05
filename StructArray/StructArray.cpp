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

	int count = 3, i = 0;

	for (i = count; i < MAX; i++)
	{
		cout << "이름은? ";
		cin >> person[i].name;
		// 두 문자열이 같으면 0을 반환
		if (strcmp(person[i].name, "end") == 0)
		{
			break;
		}

		cout << "연봉은? ";
		cin >> person[i].salary;
		count++;
	}

	for (i = 0; i < count; i++)
	{
		cout << person[i].name << "의 연봉은" << person[i].salary << "입니다." << endl;
	}

	return 0;
}