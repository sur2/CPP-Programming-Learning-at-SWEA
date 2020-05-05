#include <iostream>

using namespace std;

int sum(int n1, int n2) {
	return n1 + n2;
}

int sum(int n1, int n2, int n3) {
	return n1 + n2 + n3;
}

double sum(double d1, double d2, double d3) {
	return d1 + d2 + d3;
}

int sum(int arr[], int size) {
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += arr[i];
	}

	return total;
}

int main(void)
{
	cout << "sum(10, 20) = " << sum(10, 20) << endl;
	cout << "sum(10, 20, 30) = " << sum(10, 20, 30) << endl;
	cout << "sum(1.5, 8.7, 9.3) = " << sum(1.5, 8.7, 9.3) << endl;

	int arr[] = { 10, 20, 30, 40, 50 };
	cout << "sum(arr, size) = " << sum(arr, sizeof(arr) / sizeof(int)) << endl;

	return 0;
}