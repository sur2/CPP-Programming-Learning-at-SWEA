#include <iostream>

using namespace std;

int main()
{
	// ��ü ũ��� 4����Ʈ
	// ��ü input ���
	// �� 1����Ʈ �� char�迭 ����� ����
	union KEY {
		unsigned int input;
		unsigned char byte[4];
	};

	KEY key;

	// 4����Ʈ �� �ʱ�ȭ
	key.input = 0xc0a8a001;

	for (int i = 0; i < 4; i++)
	{
		cout << (int)key.byte[i] << endl;

	}
	return 0;
}