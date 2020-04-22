#include <iostream>

using namespace std;

int count = 100;

int Func();

int main()
{
	Func();
	::count = 50;
	cout << "main : count = " << ::count << endl;
	
	return 0;
}

int Func()
{
	int count = 10;

	cout << "Func : count = " << count << endl;
	cout << "Func : ::count = " << ::count << endl;

	return 0;
}