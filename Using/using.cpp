#include <iostream>

using namespace std;

namespace NS1 {
	int number;
	void Test() {
		cout << "NS1::Test called number = " << number << endl;
	}
}

namespace NS2 {
	int number;
	int position;
	void Test() {
		cout << "NS2::Test called number = " << number << endl;
	}

	namespace ns2 {
		int number = 1;
		void Test() {
			cout << "ns2::Test called number = " << number << endl;
		}
	}
}

int main()
{
	NS1::number = 10;
	NS1::Test();

	using namespace NS2;
	number = 100;
	Test();
	ns2::Test();
	return 0;
}