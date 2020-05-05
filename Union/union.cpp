#include <iostream>

using namespace std;

int main()
{
	// 전체 크기는 4바이트
	// 전체 input 멤버
	// 각 1바이트 씩 char배열 멤버로 접근
	union KEY {
		unsigned int input;
		unsigned char byte[4];
	};

	KEY key;

	// 4바이트 값 초기화
	key.input = 0xc0a8a001;

	for (int i = 0; i < 4; i++)
	{
		cout << (int)key.byte[i] << endl;

	}
	return 0;
}