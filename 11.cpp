//11. ������ bool
//12. string ���� ����

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
//	cout << "����:";
//	cin >> num;
//
//	check = IsEvenNumber(num);
//
//	if (check)
//	{
//		cout << "¦��" << endl;
//	}
//
//	else
//	{
//		cout << "Ȧ��" << endl;
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
		cout << "���ƿ�." << endl;
	}
	else
	{
		cout << "�޶��" << endl;
	}

	return 0;
}
