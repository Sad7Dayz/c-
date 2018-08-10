//9.레퍼런스 변수

#include <iostream>
using namespace std;
//int &Calsum(int s, int e)
//{
//	int sum = 0;
//	for (; s <= e; ++s)
//	{
//		sum += s;
//	}
//	return sum;
//}
//int main()
//{
//	/*int i = 0;
//	int &r = i;*/
//
//	int &r1 = Calsum(1, 100);
//	int &r2 = Calsum(1, 10);
//
//	
//	cout << "r1: " << r1 << "r2: " << r2 << endl;
//	return 0;
//}

//-------------------------------
int Add(int i, int j)
{
	cout << "test1" << endl;
	return i + j;
}

//int Add(int &r1, int &r2)
//{
//	cout << "test2" << endl;
//	return r1 + r2;
//}

int main()
{
	cout << Add(2, 3) << endl;

	/*int i = 2, j = 3;
	cout << Add(i, j) << endl;*/
	return 0;
}