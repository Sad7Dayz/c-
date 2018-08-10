//13.oop

#include <iostream>
#include <string>
using namespace std;
//상속과 다형성 예
class Musician //기반 클래스
{
	string name;
public:
	Musician(string name)
	{
		this->name = name;
	}

	void play()
	{
		cout << name << "랄라라" << endl;
	}

	void Greeting()
	{
		cout << "안녕하세요" << name << "입니다" << endl;
	}
};


class Pianist : public Musician //기반 클래스 Musician에서 파생클래스 pianist 정의
{
public:
	Pianist(string name) :Musician(name)
	{

	}
	void Tuning()
	{
		cout << "도도레레미미파파솔솔" << endl;
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
//	//멤버필드
//	int num;
//	string name;
//	int iq;
//
//public:
//	//멤버메서드
//	Student(int num, string name) //생성자 메서드
//	{
//		this->num = num;
//		this->name = name;
//		this->iq = 100;
//	}
//	void Study()
//	{
//		cout << name << "학생 공부하다." << endl;
//		iq++;
//	}
//	void View()
//	{
//		cout << "번호:" << num << "이름:" << name << "아이큐:" << iq << endl;
//	}
//};
//
//int main()
//{
//	Student *student = new Student(3, "홍길동");
//	student->Study();
//	student->View();
//	delete student;
//	return 0;
//}