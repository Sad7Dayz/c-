//13.oop

#include <iostream>
#include <string>
using namespace std;
//��Ӱ� ������ ��
class Musician //��� Ŭ����
{
	string name;
public:
	Musician(string name)
	{
		this->name = name;
	}

	void play()
	{
		cout << name << "�����" << endl;
	}

	void Greeting()
	{
		cout << "�ȳ��ϼ���" << name << "�Դϴ�" << endl;
	}
};


class Pianist : public Musician //��� Ŭ���� Musician���� �Ļ�Ŭ���� pianist ����
{
public:
	Pianist(string name) :Musician(name)
	{

	}
	void Tuning()
	{
		cout << "���������̹����ļּ�" << endl;
	}
};

void Test(Musician *musician);

int main()
{
	Pianist *pianist = new Pianist("JSJ");
	Test(pianist);
}

void Test(Musician *musician)
{
	musician->Greeting();
	musician->play();
}
//class Student
//{
//	//����ʵ�
//	int num;
//	string name;
//	int iq;
//
//public:
//	//����޼���
//	Student(int num, string name) //������ �޼���
//	{
//		this->num = num;
//		this->name = name;
//		this->iq = 100;
//	}
//	void Study()
//	{
//		cout << name << "�л� �����ϴ�." << endl;
//		iq++;
//	}
//	void View()
//	{
//		cout << "��ȣ:" << num << "�̸�:" << name << "����ť:" << iq << endl;
//	}
//};
//
//int main()
//{
//	Student *student = new Student(3, "ȫ�浿");
//	student->Study();
//	student->View();
//	delete student;
//	return 0;
//}