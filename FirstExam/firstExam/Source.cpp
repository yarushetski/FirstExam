#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	cout << " ������ " << endl;
	cout << " ���� \"���������\" ����������" << endl;
	int win = 0, lose = 0;

	for (int i = 0; i < 3; i++)
	{
		int a = rand() % (11 - 1) + 1;
		int b = rand() % (11 - 1) + 1;
		cout << endl << " ����� �������� " << a << " �� " << b << endl;

		int c = a * b;
		cout << " ������� ����� -> ";
		int ans;
		cin >> ans;

		if (ans == c)
		{
			cout << endl;
			cout << " _____________________________" << endl << endl;
			cout << " �������, ��� ���������� ����� " << endl;
			cout << " _____________________________" << endl;
			win++;
		}
		else
		{
			cout << endl;
			cout << " ___________________" << endl << endl;
			cout << " ����� ������������ " << endl;
			cout << " ___________________" << endl;
			lose++;
		}
		cout << endl;
	}

	if (win == 3)
	{
		cout << "  ___________________________________ " << endl;
		cout << " |                                   |" << endl;
		cout << " | ���! �� ���� 3 ���������� ������! |" << endl;
		cout << " |___________________________________|" << endl;
	}
	else if (lose == 3)
	{
		cout << "  ____________________________________________" << endl;
		cout << " |                                            |" << endl;
		cout << " | � ���������, �� ��������� ��� ���� ������� |" << endl;
		cout << " |____________________________________________|" << endl;
	}

	system("pause");
	return 0;
}