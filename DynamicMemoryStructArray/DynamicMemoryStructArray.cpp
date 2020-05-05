#include <iostream>

struct MEMINFO {
	char name[20];
	int salary;
};

int main()
{
	int size = 0;

	std::cout << "배열의 크기는? ";
	std::cin >> size;

	MEMINFO* ptr = new MEMINFO[size];

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		std::cout << "이름은? ";
		std::cin >> (ptr + i)->name;

		if (strcmp((ptr + i)->name, "end") == 0)
		{
			break;
		}

		std::cout << "연봉은? ";
		std::cin >> (*(ptr + i)).salary;

		count++;
	}

	for (int i = 0; i < count; i++)
	{
		std::cout << (ptr + i)->name << "의 연봉은 " << (*(ptr + i)).salary << "입니다." << std::endl;
	}

	delete[] ptr;

	return 0;
}