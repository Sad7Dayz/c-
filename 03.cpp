//3. 입출력 개요(cin, cout)

#include <iostream>
using namespace std;
//STL

void TestCout()
{
	int num = 23;
	const char *name = "홍길동";

	cout << "이름: " << name << "번호: " << num << endl;
}
void TestCin()
{
	int num;
	char name[256];

	cout << "번호:";
	cin >> num;

	cout << "이름:";
	cin >> name;

	cout << "입력한 번호는 " << num << "이름은" << name << "입니다." << endl;
}

int main()
{
	TestCin();
	TestCout();
	return 0;
}