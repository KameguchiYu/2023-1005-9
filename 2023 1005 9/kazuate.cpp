#include <iostream>
#include <cstdlib>
#include <ctime>
#include"kazuate.h"
using namespace std;

int answer = 0;
int question = 0;

void inoutput()
{
	cout << "1�`10�̐�������͂��Ă�������" << endl;
	cin >> answer;
}

int random()
{
	srand((unsigned int)time(NULL));
	return rand() % 10 + 1;
}

void problem()
{
	question = random();

	for (; ;)
	{
		inoutput();
		if (answer == question)
		{
			cout << "����" << endl;
			break;
		}
		else if (answer != question)
		{
			cout << "�s����" << endl;

			if (answer < question)
			{
				cout << "�����Ƒ傫�������ł�" << endl;
			}
			else if (answer > question)
			{
				cout << "�����Ə����������ł�" << endl;
			}
		}
	}
}