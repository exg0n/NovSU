#include <iostream>

using namespace std;

void task_1()
{
	int a = 0, summ = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Введите " << i+1 << " число: ";
		cin >> a;

		summ += a;
	}

	cout << endl << "Сумма чисел: " << summ;
}

void task_2()
{
	int n = 0;
	double a = 0, summ = 0;

	cout << "Введите кол-во чисел: ";
	cin >> n;

	for (double i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " число: ";
		cin >> a;

		if (a != floor(a))
			summ += a;
	}

	cout << endl << "Сумма вещественных чисел: " << summ;
}

void task_3()
{
	int perimeter = 0, side_amount = 20, side = 0;

	for (int i = 0; i < side_amount; i++)
	{
		cout << "Введите " << i + 1 << " сторону 20-угольника: ";
		cin >> side;

		perimeter += side;
	}

	cout << "Сумма периметра 20-угольника = " << perimeter;
}

void task_4()
{
	int number_of_items = 0, items = 0, summ = 0;

	cout << "Введите кол-во предметов: ";
	cin >> number_of_items;

	for (int i = 0; i < number_of_items; i++)
	{
		cout << "Введите массу " << i + 1 << " предмета: ";
		cin >> items;

		summ += items;
	}

	cout << "Общая масса груза: " << summ;
}

void task_5()
{
	int amount_of_elements = 0, elements = 0, summ = 0;

	cout << "Введите кол-во элементов сопротивления: ";
	cin >> amount_of_elements;

	for (int i = 0; i < amount_of_elements; i++)
	{
		cout << "Введите сопротивление " << i + 1 << " элемента: ";
		cin >> elements;

		summ += elements;
	}

	cout << "Общее сопротивление последовательной сети: " << summ;
}

void task_6()
{
	double amount_of_elements = 0, elements = 0, summ = 0;

	cout << "Введите кол-во элементов сопротивления: ";
	cin >> amount_of_elements;

	for (int i = 0; i < amount_of_elements; i++)
	{
		cout << "Введите сопротивление " << i + 1 << " элемента: ";
		cin >> elements;

		summ += (1/elements);
	}

	cout << "Общее сопротивление парральеной сети: " << 1 / summ;
}

void task_7()
{
	int number = 0, summ = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a, b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_7();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			cout << "Введите последовательность чисел: ";

			while (cin >> number)
			{
				if (number == 0)
					break;

				summ += number;
			}

			cout << "Сумма всех чисел последовательности: " << summ;

			cout << endl;
			break;

		case('b'):
			system("cls");

			cout << "Введите последовательность чисел: ";

			while (cin >> number)
			{
				if (number == 0)
					break;
				summ++;
			}
			
			cout << "Количество всех чисел последовательности: " << summ;

			cout << endl;
			break;
		}
	}
}

void task_8()
{
	int grade = 0, item = 4, student = 2, summ = 0;

	for (int i = 0; i < student; i++)
	{
		cout << "Введите оценки " << i + 1 << " ученика: " << endl << endl;
		
		for (int j = 0; j < item; j++)
		{
			cout << "Введите " << j + 1 << " оценку: ";
			cin >> grade;

			summ += grade;
		}
		cout << endl << "Сумма оценок " << i + 1 << " ученика: " << summ << endl << endl;
		summ = 0;
	}
}

void task_9()
{
	int point = 0, sport = 5, athlete = 2, summ = 0;

	for (int i = 0; i < athlete; i++)
	{
		cout << "Введите баллы " << i + 1 << " спортсмена: " << endl << endl;

		for (int j = 0; j < sport; j++)
		{
			cout << "Введите " << j + 1 << " балл: ";
			cin >> point;

			summ += point;
		}
		cout << endl << "Сумма баллов " << i + 1 << " спортсмена: " << summ << endl << endl;
		summ = 0;
	}
}

void task_10()
{
	int a = 8, number = 0, product_of_numbers = 1;

	for (int i = 0; i < a; i++)
	{
		cout << "Введите " << i + 1 << " число: ";
		cin >> number;

		product_of_numbers *= number;
	}

	cout << "Произведение чисел: " << product_of_numbers;
}

void task_11()
{
	int number = 0, product_of_numbers = 1;

	cout << "Введите последовательность чисел: ";

	while (cin >> number)
	{
		if (number == 0)
			break;

		cout << product_of_numbers * number << ", ";
		product_of_numbers *= number;
	}
}

void task_12()
{
	double a = 10, number = 0, summ = 0;

	for (double i = 0; i < a; i++)
	{
		cout << "Введите " << i + 1 << " число: ";
		cin >> number;

		summ += number;
	}

	if (summ > 1408)
		cout << "Верно";
	else
		cout << "Неверно";
}

void task_13()
{
	int n = 0, b = 10, a = 0, p = 0, summ = 0;

	cout << "Введите число n: ";
	cin >> n;
	cout << "Введите число p: ";
	cin >> p;

	for (int i = 0; i < b; i++)
	{
		cout << "Ввведите b" << i + 1 << ": ";
		cin >> a;

		summ += a;
	}

	if (summ < p)
		cout << "Верно";
	else
		cout << "Неверно";
}

void task_14()
{
	int a = 0, number = 0, summ = 0;

	cout << "Введите кол-во вводимых чисел: ";
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cout << "Введите " << i + 1 << " число: ";
		cin >> number;

		summ += number;
	}

	if (summ % 2 == 0)
		cout << "Сумма чисел четное";
	else
		cout << "Сумма чисел нечетные";
}

void task_15()
{
	int b = 14, summ = 0, number = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a, b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_7();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			for (int i = 0; i < b; i++)
			{
				cout << "Введите b" << i + 1 << ": ";
				cin >> number;
				
				if (number > 20)
					summ += number;
			}

			if (summ > 100)
				cout << "Сумма превышает 100";
			else
				cout << "Не превышает 100";

			cout << endl;
			break;

		case('b'):
			system("cls");

			for (int i = 0; i < b; i++)
			{
				cout << "Введите b" << i + 1 << ": ";
				cin >> number;

				if (number < 50)
					summ += number;
			}

			if (summ % 2 == 0)
				cout << "Четное число";
			else
				cout << "Нечетное число";


			cout << endl;
			break;
		}
	}
}

void task_16()
{
	double x = 0, 
		y = 0, 
		g = 9.8, 
		a = 0,
		t = 0,
		v = 0, 
		p = 0, 
		r = 0, 
		h = 0;

	int n = 0, counter = 0;

	cout << "Введите расстояние до цели: ";
	cin >> r;
	cout << "Введите высоту до цели: ";
	cin >> h;
	cout << "Введите высоту цели: ";
	cin >> p;

	cout << "Введите кол-во пар: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Введите число a: ";
		cin >> a;
		cout << "Введите число v: ";
		cin >> v;
		cout << "Введите число t: ";
		cin >> t;

		x = v * t * cos(a);
		y = (v * t * sin(a)) - (g * pow(t, 2)) / 2;

		if (x == r && y >= h && y <= h + p)
			counter++;
	}

	cout << "% попаданий: " << double(counter) / double(n);
	
}

void task_17()
{
	int s = 12, number = 0, max = 0, min = 1000, counter = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a, b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_17();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			for (int i = 0; i < s; i++)
			{
				cout << "Введите " << i + 1 << " число: ";
				cin >> number;

				if (number > max)
				{
					max = number;
					counter = 0;
				}

				if (number == max)
					counter++;
			}

			cout << endl << "Максимальное число встретилось " << counter << " раз";

			cout << endl;
			break;

		case('b'):
			system("cls");

			for (int i = 0; i < s; i++)
			{
				cout << "Введите " << i + 1 << " число: ";
				cin >> number;

				if (number < min)
				{
					min = number;
					counter = 0;
				}

				if (number == min)
					counter++;
			}

			cout << endl << "Минимальное число встретилось " << counter << " раз";

			cout << endl;
			break;
		}
	}
}

void task_18()
{
	int n = 0, a = 0, b = 0, counter = 0;
	double average = 0, max = 0, min = 1000;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a, b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_18();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			cout << "Введите кол-во пар: ";
			cin >> n;

			for (int i = 0; i < n; i++)
			{
				cout << "Пара " << i + 1 << ": " << endl;
				cout << "Введите a: ";
				cin >> a;
				cout << "Введите b: ";
				cin >> b;

				average = (a + b) / 2;

				if (average > max)
					max = average;
				if (average == max)
					counter = i + 1;
			}

			cout << "Номер последнего максимального среднего арифемтического: " << counter;

			cout << endl;
			break;

		case('b'):
			system("cls");

			cout << "Введите кол-во пар: ";
			cin >> n;

			for (int i = 0; i < n; i++)
			{
				cout << "Пара " << i + 1 << ": " << endl;
				cout << "Введите a: ";
				cin >> a;
				cout << "Введите b: ";
				cin >> b;

				average = sqrt(a * b);

				if (average < min)
				{
					min = average;
					counter = i + 1;
				}
			}

			cout << "Номер первого минимального среднего геометрического: " << counter;


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

	if (x > 18 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий 18.\nПовторите попытку.\n";
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
		case 13:
			system("cls");
			task_13();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 14:
			system("cls");
			task_14();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 15:
			system("cls");
			task_15();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 16:
			system("cls");
			task_16();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 17:
			system("cls");
			task_17();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 18:
			system("cls");
			task_18();
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