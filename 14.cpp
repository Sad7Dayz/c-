//14. ĸ��ȭ ����

#include<iostream>
#include <string>
using namespace std;

class Unit
{
	int num;
	string name;
	int hp;
#define MAX_HP 200
public:
	Unit(int num, string name)
	{
		this->num = num;
		this->name = name;
		hp = 100;
	}
	void Train(int hour)
	{
		cout << num << "�� ����(" << name << ") �Ʒ��ϴ�" << endl;
		hp += hour;
		if (hp > MAX_HP)
		{
			hp - MAX_HP;
		}
	}
	void View()
	{
		cout << num << "�� ����(" << name << ") hp:" << hp << endl;
	}
};
int main()
{
	Unit unit(3, "ȫ�浿");
	unit.Train(5);
	unit.View();
	unit.Train(1000);
	unit.View();
	/*unit.hp += 1000;
	unit.View();*/
	return 0;
}