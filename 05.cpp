//5.�Լ� �ߺ� ����(Function Overloading)

#include <iostream>
using namespace std;

int GetMax(int a, int b) 
{
	cout << "int GetMax(int a, int b)" << endl;
	if (a > b)
	{
		return a;
	}
	return b;
}

char GetMax(char a, char b)
{
	cout << "char GetMax(char a, char b)" << endl;
	if (a > b)
	{
		return a;
	}
	return b;
}

int main()
{
	cout << GetMax(2, 3) << endl;
	cout << GetMax('a', 'b') << endl;
	return 0;
}