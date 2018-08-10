//6. 디폴드 매개 변수
//7. 매개 변수 이름이 없는 스텁 매개변수

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
	cout << "반지름이 3인 원의 넓이:";
	cout << CalculateArea(3) << endl;
	cout << "반지름이 3인 반원의 넓이:";
	cout << CalculateArea(3.0, 3.14) << endl;
	cout << "사각형의 넓이:";
	cout << CalculateArea(3, 4) << endl;
	cout << "삼각형의 넓이:";
	cout << CalculateArea(3, 4, false) << endl;
	return 0;
}