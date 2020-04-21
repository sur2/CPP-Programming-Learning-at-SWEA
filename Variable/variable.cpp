#include <iostream>
using namespace std;

int scount = 100;

int Func(void);

int main()
{
	Func();
	cout << "main : count = " << scount << endl;
	return 0;
}

int Func()
{
	int number = 10;

	cout << "Func : number = " << number << endl;
	cout << "Func : count = " << scount << endl;

	return 0;
};