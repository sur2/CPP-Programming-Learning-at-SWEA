#include <iostream>

using namespace std;

#define ROWMAX 5
#define COLMAX 3

int main()
{
	int score[ROWMAX][COLMAX] = {
		{78, 65, 80},
		{93, 88, 95},
		{85, 97, 94},
		{66, 79, 82},
		{84, 87, 88}
	};

	int i = 0, j = 0, sum = 0;

	float avg[ROWMAX] = {};

	for (i = 0; i < ROWMAX; i++)
	{
		sum = 0;
		for (j = 0; j < COLMAX; j++)
		{
			sum += score[i][j];
		}
		avg[i] = (float) sum / COLMAX;
	}

	for (i = 0; i < ROWMAX; i++)
	{
		cout << avg[i] << endl;
	}

	return 0;
}