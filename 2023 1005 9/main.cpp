#include <iostream>
#include <cstdlib>
#include <ctime>
#include "kazuate.h"
#include "janken.h"
using namespace std;

int main()
{
	for (; ;)
	{
		int select = 0;
		cout << "����񂯂�����܂����H= 1�@�����Ă����܂����H = 2�@��߂܂��� = 3" << endl;
		cin >> select;

		if (select == 1)
		{
			game();
		}
		else if (select == 2)
		{
			problem();
		}
		else if (select == 3)
		{
			break;
		}
	}
}