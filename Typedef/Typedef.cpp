#include <iostream>
using namespace std;

int main()
{
	typedef unsigned short uint16;
	// �ٸ� �����Ϸ�(or �÷���)���� ����� ��� typedef�� �����Ͽ� �ڷ����� ũ�⸦ ���� �� �ִ�.
	// int���� ũ�Ⱑ 2Byte(16bit)�� ��� unsign int�� typedef�� ����
	uint16 port;

	// 2^16 - 1 = 65535
	port = 65535;

	cout << port << endl;

	return 0;
}