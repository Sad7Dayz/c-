//6. ������ �Ű� ����
//7. �Ű� ���� �̸��� ���� ���� �Ű�����

#include <iostream>
using namespace std;

double CalculateArea(double radius, double radian = 2 * 3.14)
{
	return radius * radius * (radian / 2);
}

int CalculateArea(int width, int height)
{
	return width *height;
}

int CalculateArea(int width, int height, bool)
{
	return width * height/2;
}

int main()
{
	cout << "�������� 3�� ���� ����:";
	cout << CalculateArea(3) << endl;
	cout << "�������� 3�� �ݿ��� ����:";
	cout << CalculateArea(3.0, 3.14) << endl;
	cout << "�簢���� ����:";
	cout << CalculateArea(3, 4) << endl;
	cout << "�ﰢ���� ����:";
	cout << CalculateArea(3, 4, false) << endl;
	return 0;
}