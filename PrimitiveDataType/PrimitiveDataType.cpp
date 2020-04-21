#include <iostream>

using namespace std;
/* 
	wchar_t, long, long double은 컴파일러에 따라 다름
	2, 4, 8 or 4, 8, 16
*/
int main(void)
{
	cout << "size of bool = " << sizeof(bool) << endl;
	cout << "size of char = " << sizeof(char) << endl;
	cout << "size of wchar_t = " << sizeof(wchar_t) << endl;
	cout << "size of short = " << sizeof(short) << endl;
	cout << "size of int = " << sizeof(int) << endl;
	cout << "size of long = " << sizeof(long) << endl;
	cout << "size of float = " << sizeof(float) << endl;
	cout << "size of double = " << sizeof(double) << endl;
	cout << "size of long double = " << sizeof(long double) << endl;
	cout << "size of short = " << sizeof(short) << endl;
	cout << "size of short = " << sizeof(short) << endl;

	return 0;
}

