#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(int num, string name)
{
	this->num = num;
	this->name = name;
	iq = DEF_IQ;
}
void Student::Study(int hour)
{
	cout << name << "�л�" << hour << "�ð� �����ϴ�." << endl;
	iq += hour;
	if (iq > MAX_IQ)
	{
		iq = MAX_IQ;
	}

}
void Student::View()
{
	cout << "��ȣ: " << num << "�̸�: " << name << "����ť" << iq << endl;
}