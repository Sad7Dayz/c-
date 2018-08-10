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
	cout << name << "학생" << hour << "시간 공부하다." << endl;
	iq += hour;
	if (iq > MAX_IQ)
	{
		iq = MAX_IQ;
	}

}
void Student::View()
{
	cout << "번호: " << num << "이름: " << name << "아이큐" << iq << endl;
}