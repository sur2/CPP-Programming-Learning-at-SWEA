#include <iostream>
using namespace std;

int main()
{
	typedef unsigned short uint16;
	// 다른 컴파일러(or 플랫폼)에서 사용할 경우 typedef를 변경하여 자료형의 크기를 맞출 수 있다.
	// int형의 크기가 2Byte(16bit)일 경우 unsign int로 typedef를 변경
	uint16 port;

	// 2^16 - 1 = 65535
	port = 65535;

	cout << port << endl;

	return 0;
}