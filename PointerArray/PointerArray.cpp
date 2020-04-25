#include <iostream>

using namespace std;

int main()
{
	// const char* array[] = {char* ch0, char* ch1, char* ch2 ,,,}
	const char* cityNama[] = { "Seoul", "Busan", "Daeku", "Incheon", "Daejeon", "Ulsan", "kwangju", NULL };
	int len = sizeof(cityNama) / sizeof(char*);
	for (int i = 0; i < len - 1; i++)
	{
		cout << cityNama[i] << endl;
	}
	return 0;
}