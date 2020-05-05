#include <iostream>

using namespace std;

struct TYPE {
	int no;
	char name[20];
};

// �⺻ �Լ� ���ø�
template <typename T>
T max(T& x, T& y);

// Ư�� �Լ� ���ø�(�⺻ �Լ� ���ø��� Ư��ȭ)
template <>
TYPE max(TYPE& x, TYPE& y);

// �Ϲ� �Լ�
char* max(char* x, char* y);

int main(void)
{
	int x = 10, y = 20;
	double dx = 7.5, dy = 6.8;
	cout << "max(10, 20) = " << max(x, y) << endl;
	cout << "max(7.5, 6.8) = " << max(dx, dy) << endl;
	const char* a = "hello", * b = "hi";
	cout << "max(\"hello\", \"hi\") = " << max(a, b) << endl;
	TYPE sx = {10, "kim"};
	TYPE sy = {20, "lee"};
	TYPE z = max(sx, sy);
	cout << "main(TYPE sx, TYPE sy) = " << z.no << ", " << z.name << endl;

	return 0;
}

// �⺻ �Լ� ���ø�
template <typename T>
T max(T& x, T& y)
{
	return x > y ? x : y;
}

// �Ϲ� �Լ�
char* max(char* x, char* y)
{
	return strlen(x) > strlen(y) ? x : y;
}

// Ư�� �Լ� ���ø�
template <>
TYPE max(TYPE& x, TYPE& y)
{
	return x.no > y.no ? x : y;
}

