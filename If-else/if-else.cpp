#include <iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "score? ";
	cin >> score;
	if (score < 0 || score > 100)
	{
		cout << "Invalid score " << score << endl;
	}
	else {
		cout << "Valid score " << score << endl;
	}
	return 0;
}