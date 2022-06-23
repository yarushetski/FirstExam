#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	cout << " привет " << endl;
	cout << " Игра \"Умножение\" начинается" << endl;
	int win = 0, lose = 0;

	for (int i = 0; i < 3; i++)
	{
		int a = rand() % (11 - 1) + 1;
		int b = rand() % (11 - 1) + 1;
		cout << endl << " Нужно умножить " << a << " на " << b << endl;

		int c = a * b;
		cout << " Введите ответ -> ";
		int ans;
		cin >> ans;

		if (ans == c)
		{
			cout << endl;
			cout << " _____________________________" << endl << endl;
			cout << " Молодец, это правильный ответ " << endl;
			cout << " _____________________________" << endl;
			win++;
		}
		else
		{
			cout << endl;
			cout << " ___________________" << endl << endl;
			cout << " Ответ неправильный " << endl;
			cout << " ___________________" << endl;
			lose++;
		}
		cout << endl;
	}

	if (win == 3)
	{
		cout << "  ___________________________________ " << endl;
		cout << " |                                   |" << endl;
		cout << " | Ура! Вы дали 3 правильных ответа! |" << endl;
		cout << " |___________________________________|" << endl;
	}
	else if (lose == 3)
	{
		cout << "  ____________________________________________" << endl;
		cout << " |                                            |" << endl;
		cout << " | К сожелению, Вы потратили все свои попытки |" << endl;
		cout << " |____________________________________________|" << endl;
	}

	system("pause");
	return 0;
}