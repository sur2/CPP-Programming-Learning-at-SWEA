#include <iostream>

using namespace std;

int main()
{
	// ����ü ����
	struct MEMINFO {
		char name[100];
		int salary;
	};

	MEMINFO s1 = { "ȫ����", 4500 };
	MEMINFO s2 = s1;

	cout << "s2.name : " << s2.name << endl;
	cout << "s2.salary : " << s2.salary << endl;

	return 0;
}