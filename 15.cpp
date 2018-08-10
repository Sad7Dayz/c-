//15. 접근 지정자


#include "Student.h"
//이름, 번호, 아이큐(최대 300)
//생성(이름, 번호), 아이큐:100
//공부하다

int main()
{
	Student stu(34, "홍길동");
	stu.View();
	stu.Study(50);
	stu.View();
	return 0;
}