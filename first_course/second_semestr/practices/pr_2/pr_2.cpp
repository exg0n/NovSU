// Вариант 9

using namespace std;

#include <iostream>

// Функция для вычисления значения F(n)
int F(int n) {

	if (n == 0)
		return 0;
	else if (n % 2 == 0)
		return F(n / 2);
	else
		return 1 + F(n - 1);
}

void task_1()
{
	int count = 0;

	for (int n = 1; n <= 500; ++n)
		if (F(n) == 3)
			count++;

	cout << "Количество чисел n, для которых F(n) = 3: " << count << endl;
}

void task_2()
{

}

void task_3()
{

}

void choose_task()
{
	int x = 0;

	cout << "Введите номер задания: ";
	cin >> x;

	if (x > 3 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий: 3.\nПовторите попытку.\n";
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
		}
	}
}

int main()
{
	setlocale(LC_ALL, "russian");

	choose_task();
}