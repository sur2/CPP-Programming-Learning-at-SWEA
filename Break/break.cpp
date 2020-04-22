#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	char ch;
	while (true)
	{
		cout << "ch? ";
		cin >> ch;
		count++;

		if (ch == 'e')
		{
			break;
		}
	}

	cout << "e Æ÷ÇÔ : " << count << endl;

	return 0;
}