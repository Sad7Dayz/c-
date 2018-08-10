//8. 이름 충돌을 방지하는 namespace
// :: 스코프연산자
#include <iostream>
using namespace std;
//
//namespace DemoA
//{
//	struct Stack
//	{
//		int top;
//	};
//}
//
//namespace DemoB
//{ 
//	struct Stack
//	{
//		int last;
//	};
//}
//int main()
//{
//	DemoA::Stack stacka;
//	DemoB::Stack stackb;
//
//	stacka.top = -1;
//	stackb.last = -2;
//	return 0;
//}

//---------------------

namespace DemoA
{
	struct Stack
	{
		int top;
	};
	struct Queue
	{
		int front;
		int rear;
	};
}

namespace DemoB
{
	struct Stack
	{
		int last;
	};
	struct Queue
	{
		int first;
		int last;
	};
}

using namespace DemoA;
int main()
{
	Stack s;
	Queue q;
	s.top = -1;
	q.rear = q.front = 0;

	DemoB::Stack s2;
	s2.last = -1;
	return 0;
}