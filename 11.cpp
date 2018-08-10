//11. 논리형식 bool
//12. string 형식 개요

//#include <iostream>
//using namespace std;
//
//bool IsEvenNumber(int num)
//{
//	return num % 2 == 0;
//}
//
//int main()
//{
//	bool check = false;
//	int num = 0;
//
//
//	cout << "정수:";
//	cin >> num;
//
//	check = IsEvenNumber(num);
//
//	if (check)
//	{
//		cout << "짝수" << endl;
//	}
//
//	else
//	{
//		cout << "홀수" << endl;
//	}
//	return 0;
//}

//-------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "hello";
	string s2;
	s2 = s;

	if (s == s2)
	{
		cout << "같아요." << endl;
	}
	else
	{
		cout << "달라요" << endl;
	}

	return 0;
}
