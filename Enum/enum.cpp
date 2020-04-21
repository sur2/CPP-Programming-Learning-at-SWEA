#include <iostream>

using namespace std;

int main()
{
	enum language { c = 10, cplusplus = 20, java = 30 } myLanguage;
	
	myLanguage = cplusplus;

	cout << "cplusplus = " << myLanguage << endl;

	return 0;
}