#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int player = 0;
int cpu = 0;

void outinput()
{
	cout << "�����o���܂����H" << endl
		<< "�O�[ = 1, �`���L = 2, �p�[ = 3" << endl;
	cin >> player;
}

int randomj()
{
	srand((unsigned int)time(NULL));
	return rand() % 3 + 1;
}

void game()
{
	int a = 0;
	cpu = randomj();
	outinput();
	for (; ;)
	{
		if (player == cpu)
		{
			cout << "������" << endl;
			cpu = randomj();
			cout << cpu << endl;
			outinput();
		}
		else if (player == 1)
		{
			if (cpu == 2)
			{
				cout << "�v���C���[�̏���" << endl;
				break;
			}
			else if (cpu == 3)
			{
				cout << "CPU�̏���" << endl;
				break;
			}
		}
		else if (player == 2)
		{
			if (cpu == 1)
			{
				cout << "CPU�̏���" << endl;
				break;
			}
			else if (cpu == 3)
			{
				cout << "�v���C���[�̏���" << endl;
				break;
			}
		}
		else if (player == 3)
		{
			if (cpu == 1)
			{
				cout << "�v���C���[�̏���" << endl;
				break;
			}
			else if (cpu == 2)
			{
				cout << "CPU�̏���" << endl;
				break;
			}
		}
	}
}