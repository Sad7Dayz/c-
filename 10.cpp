// 10. �ŷڼ� ��ȭ(������)

#include <iostream>
using namespace std;

enum Subject
{
	KOREAN, ENGLISH, MATH, MAX_SUBJECT
};

enum Scoreconst
{
	DEF_SCORE = -1, MIN_SCORE = 0, MAX_SCORE = 100
};
int main()
{
	const char *titles[MAX_SUBJECT] = { "����", "����", "����" };
	int scores[MAX_SUBJECT] = { DEF_SCORE, DEF_SCORE, DEF_SCORE };

	scores[KOREAN] = 90;
	scores[ENGLISH] = MAX_SCORE;
	scores[MATH] = MIN_SCORE;

	for (int i = 0; i < MAX_SUBJECT; i++)
	{
		cout << titles[i] << ";" << scores[i] << endl;
	}
	return 0;
}
