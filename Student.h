#pragma once
#include <string>
using namespace std;

#define DEF_IQ 100
#define MAX_IQ 300

class Student
{
	//����Ʈ ���ü�
	int num;
	string name;
	int iq;

public:
	Student(int num, string name);
	void Study(int hour);
	void View();
};

