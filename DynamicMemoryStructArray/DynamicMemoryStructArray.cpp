#include <iostream>

struct MEMINFO {
	char name[20];
	int salary;
};

int main()
{
	int size = 0;

	std::cout << "�迭�� ũ���? ";
	std::cin >> size;

	MEMINFO* ptr = new MEMINFO[size];

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		std::cout << "�̸���? ";
		std::cin >> (ptr + i)->name;

		if (strcmp((ptr + i)->name, "end") == 0)
		{
			break;
		}

		std::cout << "������? ";
		std::cin >> (*(ptr + i)).salary;

		count++;
	}

	for (int i = 0; i < count; i++)
	{
		std::cout << (ptr + i)->name << "�� ������ " << (*(ptr + i)).salary << "�Դϴ�." << std::endl;
	}

	delete[] ptr;

	return 0;
}