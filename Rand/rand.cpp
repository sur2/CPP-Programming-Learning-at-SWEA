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
		cout << "ÀÌÁö°í" << endl;
		break;
	case 1:
		cout << "¾Æ¿ô´ß" << endl;
		break;
	case 2:
		cout << "ºí·¢²¿²ô" << endl;
		break;
	default:
		break;
	}

	return 0;
}