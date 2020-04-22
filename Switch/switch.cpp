#include <iostream>

using namespace std;

int main()
{
	int score = 0;

	cout << "score ? ";
	cin >> score;

	if (score < 0 || score > 100)
	{
		cout << "Invalid score" << score << endl;
	}
	else
	{
		switch (score / 10)
		{
		case 10 :

			break;
		case 9 :
			cout << "A 학점" << endl;
			break;
		case 8 :
			cout << "B 학점" << endl;
			break;
		case 7 : 
			cout << "C 학점" << endl;
			break;
		case 6 : 
			cout << "D 학점" << endl;
			break;
		default:
			cout << "F 학점" << endl;
			break;
		}
	}

	return 0;
}