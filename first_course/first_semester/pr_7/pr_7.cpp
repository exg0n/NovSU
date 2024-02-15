#include <iostream>

using namespace std;

void task_1()
{
	int n = 0;

	cout << "Введите число n: ";
	cin >> n;

	for (int i = 1; ; i++)
	{
		if (n > pow(i, 2))
			cout << pow(i, 2) << " ";
		else
			break;
	}
}

void task_2()
{
	int n = 0, i = 1;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_2();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			cout << "Введите число n: ";
			cin >> n;

			while (pow(i, 2) < n)
				i++;

			cout << "Первое число > n: " << pow(i, 2);

			cout << endl;
			break;

		case('2'):
			system("cls");

			cout << "Введите число n: ";
			cin >> n;

			for (; ;i++)
			{
				if (n < pow(i, 2))
				{
					cout << "Первое число > n: " << pow(i, 2);
					break;
				}
			}

			cout << endl;
			break;
		}
	}
}

void task_3()
{
	double a = 0, i = 1;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_3();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			cout << "Введите число a: ";
			cin >> a;

			cout << "Числа не меньшее a: ";

			for (double i = 2; ; i++)
			{
				if (a < 1)
				{
					cout << 1;
					break;
				}
				if (a < (1 / i))
					cout << 1 / i << " ";
				else
					break;
			}

			cout << endl;
			break;

		case('2'):
			system("cls");

			cout << "Введите число a: ";
			cin >> a;

			cout << "Числа не меньшее a: ";

			while (a < 1 / i)
			{
				cout << 1 / i << " ";
				i++;
			}

			cout << endl;
			break;
		}
	}
}

void task_4()
{
	double a = 0;

	cout << "Введите число a: ";
	cin >> a;

	for (double i = 2; ; i++)
	{
		if (a > (1 / i))
		{
			cout << "Первое число < a: " << 1 / i;
			break;
		}
	}
}

void task_5()
{
	double a = 0, i = 1;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_5();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			cout << "Введите число a: ";
			cin >> a;

			cout << "Числа не меньшее a: ";

			for (double i = 2; ; i++)
			{
				if (a < 1)
				{
					cout << 1;
					break;
				}
				if (a < 1 + (1 / i))
					cout << 1 + (1 / i) << " ";
				else
					break;
			}

			cout << endl;
			break;

		case('2'):
			system("cls");

			cout << "Введите число a: ";
			cin >> a;

			cout << "Числа не меньшее a: ";

			while (a < 1 + (1 / i))
			{
				cout << 1 + (1 / i) << " ";
				i++;
			}

			cout << endl;
			break;
		}
	}
}

void task_6()
{
	double a = 0;

	cout << "Введите число a: ";
	cin >> a;

	cout << "Числа не меньшее a: ";

	for (double i = 2; ; i++)
	{
		if (a < 1 + (1 / i))
			cout << i << " ";
		else
			break;
	}
}

void task_7()
{
	double n = 0;

	cout << "Введите число n: ";
	cin >> n;

	for (double i = 2; ; i++)
	{
		if (n < 1)
		{
			cout << "Первое число > n: " << 1;
			break;
		}
		if (n < 1 + (1 / i))
		{
			cout << "Первое число > n: " << 1 + (1 / i);
			break;
		}
	}
}

void task_8()
{
	double a = 0, n = 0, summ = 0;

	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число n: ";
	cin >> n;

	cout << "Числа больше n: ";

	for (double i = 1; i <= n; i++)
	{
		summ += 1 / i;

		if (summ > a)
			cout << i << " ";
	}
}

void task_9()
{
	double a = 0, n = 0, summ = 0;

	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число n: ";
	cin >> n;

	cout << "Числа больше n: ";

	for (double i = 1; i <= n; i++)
	{
		summ += 1 / i;

		if (summ > a)
		{
			cout << i;
			break;
		}
	}
}

void task_10()
{
	double y = 0, m = 0, x = 1;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != '1' && choose != '2')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: 1, 2.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_10();
	}
	else
	{
		switch (choose)
		{
		case('1'):
			system("cls");

			cout << "Введите число m: ";
			cin >> m;

			for (double x = 1; x <= 100; x++)
			{
				y = (pow(x, 2) + 100) / (x + 200);

				if (y < m)
					cout << x << " ";
			}

			cout << endl;
			break;

		case('2'):
			system("cls");

			cout << "Введите число m: ";
			cin >> m;

			while (y < m)
			{
				y = (pow(x, 2) + 100) / (x + 200);
				cout << x << " ";
				x++;
			}

			cout << endl;
			break;
		}
	}
}

void task_11()
{
	double y_prev = 2, y_cur = 0, x = 0, e = 0;

	cout << "Введите e: ";
	cin >> e;

	for (double i = 1; ; i++)
	{
		y_cur = 0.5 * (y_prev + (i / y_prev - 1));

		if (abs(pow(y_cur, 2) - pow(y_prev, 2)) < e)
		{
			cout << y_cur;
			break;
		}
		
		y_prev = y_cur;
	}
}

void task_12()
{
	int n = 0, prev = 1, pr_prev = 0, summ = 0, temp = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a, b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_12();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			while (true)
			{
				if (prev + pr_prev < 1000)
				{
					summ += prev + pr_prev; // Сумма Фибоначчи
					temp = prev + pr_prev; // Сохранение текущего Фибоначчи числа
					pr_prev = prev; // Перезапись предпредыдущего числа
					prev = temp; // Текущее Фибоначчи число в предыдущие
				}
				else
					break;
			}

			cout << summ;

			cout << endl;
			break;

		case('b'):
			system("cls");

			cout << "Введите число n: ";
			cin >> n;

			while (true)
			{
				if (prev + pr_prev < n)
				{
					temp = prev + pr_prev; // Сохранение текущего Фибоначчи числа
					pr_prev = prev; // Перезапись предпредыдущего числа
					prev = temp; // Текущее Фибоначчи число в предыдущие
				}
				else
					break;
			}

			cout << prev + pr_prev;

			cout << endl;
			break;
		}
	}
}

void choose_task()
{
	int x = 0;

	cout << "Введите номер задания: ";
	cin >> x;

	if (x > 12 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий 12.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		choose_task();
	}
	else
	{
		switch (x)
		{
		case 1:
			system("cls");
			task_1();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 2:
			system("cls");
			task_2();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 3:
			system("cls");
			task_3();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 4:
			system("cls");
			task_4();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 5:
			system("cls");
			task_5();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 6:
			system("cls");
			task_6();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 7:
			system("cls");
			task_7();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 8:
			system("cls");
			task_8();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 9:
			system("cls");
			task_9();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 10:
			system("cls");
			task_10();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 11:
			system("cls");
			task_11();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 12:
			system("cls");
			task_12();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		}
	}
}

int main()
{
	setlocale(LC_ALL, "russian");

	choose_task();
}