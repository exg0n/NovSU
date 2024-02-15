#include <iostream>
#include <iomanip>
#include <vector>

#define _USE_MATH_DEFINES
#define exp 2.71828182845904

using namespace std;

void task_1()
{
    int number = 0;

    while (number < 10) {
        cout << 20 << " ";
        number++;
    }

	cout << endl;

	for (int i = 0; i < 10; i++)
		cout << 20 << " ";

	cout << endl;

	number = 0;

	do
	{
		cout << 20 << " ";
		number++;
	} while (number < 10);
}

void task_2()
{
	int number_b = 0;
	int number_c = 0;
	int number_d_left = 0;
	int number_d_right = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 4: a, b, c и d.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_2();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");
			for (int i = 20; i < 36; i++)
				cout << i << endl;

			cout << endl;
			break;

		case('b'):
			system("cls");
			cout << "Введите целое число не более 50: ";
			cin >> number_b;

			cout << "Квадраты целых чисел: " << endl;

			for (int i = number_b; i < 50; i++)
				cout << pow(i, 2) << endl;

			cout << endl;
			break;
		case('c'):
			system("cls");
			cout << "Введите число больше 9: ";
			cin >> number_c;

			cout << "Кубы целых чисел: " << endl;

			for (int i = 10; i <= number_c; i++)
				cout << pow(i, 3) << endl;

			cout << endl;
			break;
		case('d'):
			system("cls");

			cout << "Введите число 1: ";
			cin >> number_d_left;
			cout << "Введите число 2: ";
			cin >> number_d_right;

			for (int i = number_d_left; i <= number_d_right; i++)
				cout << i << " ";

			cout << endl;
			break;
		}
	}
}

void task_3()
{
	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 4: a, b, c и d.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_3();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			for (int i = 10; i < 26; i++)
				cout << i << " " << i + 0.4 << endl;

			cout << endl;
			break;

		case('b'):
			system("cls");

			for (int i = 25; i < 36; i++)
				cout << i << " " << i + 0.5 << " " << i - 0.2;

			cout << endl;
			break;
		}
	}
}

void task_4()
{
	for (int i = 2; i <= 20; i++)
		cout << "Колл-во товара: " << i << "\t" << "Стоимость: " << i * 20.4 << endl;
}

void task_5()
{
	cout << "Фунты" << "\tКг" << endl;
	for (int i = 1; i <= 10; i++)
		cout << i << "\t" << double(i * 453) / 1000 << endl;
}

void task_6()
{
	double p = 1.29, z = 1.25 * pow(10, -4);

	cout << "Высота\tПлотность воздуха" << endl;

	for (int height = 0; height <= 1000; height += 100)
		cout << height << "\t" << p * pow(exp, -height * z) << endl;
}

void task_7()
{
	for (int i = 1; i <= 9; i++)
		cout << i << " x 7 = " << i * 7 << endl;
}

void task_8()
{
	int n = 0;

	cout << "Введите число до 9: ";
	cin >> n;

	cout << endl;

	for (int i = 1; i <= 9; i++)
		cout << i << " x " << n << " = " << i * n << endl;
}

void task_9()
{
	for (int i = 2; i <= 15; i++)
		cout << "sin(" << i << ") = " << sin(i) << endl;
}

void task_10()
{
	for (int a = 2; a <= 17; a++)
		cout << a << ". " << "z = " << 4.3 * pow(3 * a, 2) - 8 * 3 * a + 13 << endl;
}

void task_11()
{
	int summ_a = 0, input_b = 0, summ_b = 0, input_c = 0, summ_c = 0, input_d_left = 0, input_d_right = 0, summ_d = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 4: a, b, c и d.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_11();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			for (int i = 200; i <= 600; i++)
				summ_a += i;

			cout << "Сумма всех целых чисел: " << summ_a;

			cout << endl;
			break;

		case('b'):
			system("cls");

			cout << "Введите число не более 400: ";
			cin >> input_b;

			for (int i = input_b; i <= 400; i++)
				summ_b += i;
			cout << "Сумма всех целых чисел: " << summ_b;

			cout << endl;
			break;
		case('c'):
			system("cls");

			cout << "Введите число: ";
			cin >> input_c;

			for (int i = -15; i <= input_c; i++)
				summ_c += i;
			cout << "Сумма всех целых чисел: " << summ_c;

			cout << endl;
			break;
		case('d'):
			system("cls");

			cout << "Введите число 1: ";
			cin >> input_d_left;
			cout << "Введите число 2: ";
			cin >> input_d_right;

			for (int i = input_d_left; i <= input_d_right; i++)
				summ_d += i;
			cout << "Сумма всех целых чисел: " << summ_d;

			cout << endl;
			break;
		}
	}
}

void task_12()
{
	int summ_a = 0, input_b = 0, summ_b = 0, input_c = 0, summ_c = 0, input_d_left = 0, input_d_right = 0, summ_d = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 4: a, b, c и d.\nПовторите попытку.\n";
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

			for (int i = 1; i <= 750; i++)
				summ_a += i;

			cout << "Среднее арифмитическое: " << double(summ_a) / 750;

			cout << endl;
			break;

		case('b'):
			system("cls");

			cout << "Введите число не менее 150: ";
			cin >> input_b;

			for (int i = 150; i <= input_b; i++)
				summ_b += i;
			cout << "Среднее арифмитическое: " << double(summ_b) / (input_b - 150 + 1);

			cout << endl;
			break;
		case('c'):
			system("cls");

			cout << "Введите число: ";
			cin >> input_c;

			for (int i = input_c; i <= 200; i++)
				summ_c += i;
			cout << "Среднее арифмитическое: " << double(summ_c) / (200 - input_c + 1);

			cout << endl;
			break;
		case('d'):
			system("cls");

			cout << "Введите число 1: ";
			cin >> input_d_left;
			cout << "Введите число 2: ";
			cin >> input_d_right;

			for (int i = input_d_left; i <= input_d_right; i++)
				summ_d += i;
			cout << "Среднее арифмитическое: " << double(summ_d) / (input_d_right - input_d_left + 1);

			cout << endl;
			break;
		}
	}
}

void task_13()
{
	double summ = 0;

	for (double i = 2; i <= 10; i++)
		summ += i / (i + 1);
	cout << "Сумма: " << summ << endl;
}

void task_14()
{
	double summ = 1;

	for (int i = 1; i <= 8; i++)
		summ += (1 / pow(3, i));
	cout << "Сумма: " << summ << endl;
}

void task_15()
{
	double summ = 0, n = 0;

	cout << "Введите число: ";
	cin >> n;

	for (double i = 1; i <= n; i++)
		summ += pow(-1, i + 1) * (1 / i);
	cout << "Сумма: " << summ << endl;
}

void task_16()
{
	int a = 0, b = 0, c = 0;

	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << "Введите число c: ";
	cin >> c;

	cout << endl << "Кратные числа: ";

	for (int i = a; i <= b; i++)
		if (i % c == 0)
			cout << i << " ";
}

void task_17()
{
	cout << "Делимые числа: ";

	for (int i = 1000; i <= 9999; i++)
		if (i % 133 == 125 && i % 134 == 111)
			cout << i << " ";
}

void task_18()
{
	int summ = 0, a = 0, b = 0;

	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;

	cout << endl << "Сумма кратные 4: ";

	for (int i = a; i <= b; i++)
		if (i > 0 && i % 4 == 0)
			summ += i;
	cout << summ << " ";
}

void task_19()
{
	int number = 0, summ = 0, summ_2 = 0, d = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd' && choose != 'e' && choose != 'f' && choose != 'j')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 7: a, b, c, d, e, f и j.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_19();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			cout << endl << "Делители числа: ";

			for (int i = 1; i <= number; i++)
				if (number % i == 0)
					cout << i << " ";

			cout << endl;
			break;

		case('b'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			cout << endl << "Сумма делителей числа: ";

			for (int i = 1; i <= number; i++)
				if (number % i == 0)
					summ += i;
			cout << summ << " ";

			cout << endl;
			break;
		case('c'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			cout << endl << "Сумма четных делителей числа: ";

			for (int i = 1; i <= number; i++)
				if (number % i == 0 && i % 2 == 0)
					summ += i;
			cout << summ << " ";

			cout << endl;
			break;
		case('d'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			cout << endl << "Кол-во делителей числа: ";

			for (int i = 1; i <= number; i++)
				if (number % i == 0)
					summ += 1;
			cout << summ << " ";

			cout << endl;
			break;
		case('e'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			cout << endl << "Кол-во нечетных делителей числа: ";

			for (int i = 1; i <= number; i++)
				if (number % i == 0 && i % 2 == 1)
					summ += 1;
			cout << summ << " ";

			cout << endl;
			break;
		case('f'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			for (int i = 1; i <= number; i++)
				if (number % i == 0)
				{
					summ += 1;
					if (i % 2 == 0)
						summ_2 += 1;
				}

			cout << "Кол-во делителей: " << summ << endl << "Четные: " << summ_2;

			cout << endl;
			break;
		case('j'):
			system("cls");

			cout << "Введите число 1: ";
			cin >> number;
			cout << "Введите число 2: ";
			cin >> d;

			for (int i = 1; i <= number; i++)
				if (number % i == 0)
				{
					summ += 1;
					if (i > d)
						summ_2 += 1;
				}

			cout << "Кол-во делителей: " << summ << endl << "Больших d: " << summ_2;

			cout << endl;
			break;
		}
	}
}

void task_20()
{
	int i = 1, n = 0;

	cout << "Введите число n: ";
	cin >> n;

	while (i <= n)
	{
		cout << i;
		cout << endl;
		i++;
	}
}

void task_21()
{
	int a = 10, b = 100, i = 0;

	while (a <= b)
	{
		if (a % 2 == 0)	
			cout << a << " " << endl;
		a++;
	}
}

void task_22()
{
	int a = 190;

	while (a % 17 != 0)
		a++;
	cout << a;
}

void task_23()
{
	int n = 0, i = 1;

	cout << "Введите число: ";
	cin >> n;

	while (pow(i, 2) <= n)
	{
		cout << i << " ";
		i++;
	}
}

void task_24()
{
	int i = 0, a = 0;

	while (cin >> a)
	{
		i++;

		if (a == 0 || i == 10)
			break;
	}
}

void task_25()
{
	int a = 10;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a, b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_25();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			while (a <= 30)
			{
				cout << a << endl;
				a++;
			}

			cout << endl;
			break;

		case('b'):
			system("cls");

			do
			{
				cout << a << endl;
				a++;
			} while (a <= 30);

			cout << endl;
			break;
		}
	}
}

void task_26()
{
	for (double i = 1; i <= 13.5; i += 0.5)
		cout << fixed << setprecision(1) << i << " ";
}

void task_27()
{
	int input = 0, number = 0, counter = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd' && choose != 'e' && choose != 'f' && choose != 'j' && choose != 'h')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 8: a, b, c, d, e, f, j, h.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_27();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			cout << "Введите число: ";
			cin >> input;

			while (input > 0)
			{
				number += input % 10;
				input /= 10;
			}

			cout << "Сумма цифр: " << number;

			cout << endl;
			break;

		case('b'):
			system("cls");

			cout << "Введите число: ";
			cin >> input;

			while (input > 0)
			{
				number += 1;
				input /= 10;
			}

			cout << "Кол-во цифр: " << number;

			cout << endl;
			break;
		case('c'):
			system("cls");

			cout << "Введите число: ";
			cin >> input;

			number = 1;

			while (input > 0)
			{
				number *= input % 10;
				input /= 10;
			}

			cout << "Произведение цифр: " << number;

			cout << endl;
			break;
		case('d'):
			system("cls");

			cout << "Введите число: ";
			cin >> input;

			number = 0;

			while (input > 0)
			{
				counter++;
				number += input % 10;
				input /= 10;
			}

			cout << "Среднее арифмитическое цифр: " << double(number) / counter;

			cout << endl;
			break;
		case('e'):
			system("cls");

			cout << "Введите число: ";
			cin >> input;

			while (input > 0)
			{
				number += pow(input % 10, 2);
				input /= 10;
			}

			cout << "Сумма квадратов цифр: " << number;

			cout << endl;
			break;
		case('f'):
			system("cls");

			cout << "Введите число: ";
			cin >> input;

			while (input > 0)
			{
				number += pow(input % 10, 3);
				input /= 10;
			}

			cout << "Сумма кубов цифр: " << number;

			cout << endl;
			break;
		case('j'):
			system("cls");

			cout << "Введите число: ";
			cin >> input;

			while (input > 10)
			{
				input /= 10;
			}

			cout << "Певрая цифра: " << input;

			cout << endl;
			break;
		case('h'):
			system("cls");

			cout << "Введите число: ";
			cin >> input;

			counter = input % 10;

			while (input > 10)
			{
				input /= 10;
			}

			cout << "Сумма первой цифры и последней: " << input + counter;

			cout << endl;
			break;
		}
	}
}

void task_28()
{
	int n = 0, q = 1;

	cout << "Введите число: ";
	cin >> n;

	while (true)
	{
		if (n % q == 0 && q != 1)
			break;
		q++;
	}

	cout << "Наименьший делитель: " << q;
}

void task_29()
{
	double rub = 1000, contribution = 0, counter = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a и b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_29();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			while (true)
			{
				contribution = (rub / 100) * 102;

				if (contribution - rub > 30)
					break;
				counter++;

				rub = contribution;
			}

			cout << "Через " << counter << " месяц";

			cout << endl;
			break;

		case('b'):
			system("cls");

			while (true)
			{
				contribution = (rub / 100) * 102;

				if (contribution > 1200)
					break;
				counter++;

				rub = contribution;
			}

			cout << "Через " << counter << " месяц";

			cout << endl;
			break;
		}
	}
}

void task_30()
{
	double hectares = 100, centner = 20, counter = 0, time = 2000;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b' && choose != 'c')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 3: a, b и c.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_30();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			while (true)
			{
				centner *= 1.02;
				counter++;

				if (centner > 22)
					break;
			}

			cout << "В " << counter << " году";
			
			cout << endl;
			break;
		case('b'):
			system("cls");

			while (true)
			{
				hectares *= 1.05;
				counter++;

				if (hectares > 120)
					break;
			}

			cout << "В " << counter << " году";

			cout << endl;
			break;
		case('c'):
			system("cls");

			while (true)
			{
				hectares *= 1.05;
				centner *= 1.02;
				time += hectares * centner;
				counter++;

				if (time > 8000)
					break;
			}

			cout << "В " << counter << " году";

			cout << endl;
			break;
		}
	}
}

void task_31()
{
	int number = 0, counter = 0, last_number = 0;

	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd' && choose != 'e' && choose != 'f')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 6: a, b, c, d, e и f.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_31();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			while (number > 0)
			{
				if (number % 10 == 3)
					counter++;
				number /= 10;
			}

			cout << "Кол-во 3 в числе: " << counter;

			cout << endl;
			break;
		case('b'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			last_number = number % 10;

			while (number > 0)
			{
				if (number % 10 == last_number)
					counter++;
				number /= 10;
			}

			cout << counter << " раз встречается последняя цифра " << last_number;

			cout << endl;
			break;
		case('c'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			while (number > 0)
			{
				if ((number % 10) % 2 == 0)
					counter++;
				number /= 10;
			}

			cout << "Кол-во четных цифр: " << counter;

			cout << endl;
			break;
		case('d'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			while (number > 0)
			{
				if (number % 10 > 5)
					counter += number % 10;
				number /= 10;
			}

			cout << "Сумма больших 5: " << counter;

			cout << endl;
			break;
		case('e'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			while (number > 0)
			{
				if (number % 10 > 7)
					counter *= number % 10;
				number /= 10;
			}

			cout << "Произведение больших 7: " << counter;

			cout << endl;
			break;
		case('f'):
			system("cls");

			cout << "Введите число: ";
			cin >> number;

			while (number > 0)
			{
				if (number % 10 == 0 || number % 10 == 5)
					counter++;
				number /= 10;
			}

			cout << "Цифры 0 и 5 встречаются " << counter << " раз";

			cout << endl;
			break;
		}
	}
}

void task_32()
{
	char choose = 0;

	cout << "Введите подпункт задания: ";
	cin >> choose;

	if (choose != 'a' && choose != 'b')
	{
		cout << "Пожалуйста, введите корректный подпункт задания.\nВсего подпунктов 2: a и b.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		task_31();
	}
	else
	{
		switch (choose)
		{
		case('a'):
			system("cls");

			cout << endl;
			break;
		case('b'):
			system("cls");

			cout << endl;
			break;
		}
	}
}

void task_33()
{
	int number = 0, max = 0, min = 10;

	cout << "Введите число: ";
	cin >> number;

	while (number > 0)
	{
		if (number % 10 > max)
			max = number % 10;

		if (number % 10 < min)
			min = number % 10;

		number /= 10;
	}
	cout << "Максимальная цифра: " << max << endl << "Минимальная цифра: " << min << endl;
}

void task_34()
{
	int number = 0, max = 0, max_it = 0, counter = 0;

	cout << "Введите число: ";
	cin >> number;

	while (number > 0)
	{
		counter++;
		if (number % 10 > max)
		{
			max = number % 10;
			max_it = counter;
		}

		number /= 10;
	}

	cout << "Порядковый номер максимальной цифры с конца числа: " << max_it << endl << "Порядковый номер максимальной цифры с начала числа: " << (counter - max_it) + 1;
}

void task_35()
{

}

void task_36() 
{
	int n = 0;
	int summ = 1;

	cin >> n;

	for (int i = 1; i <= n; i++)
		summ *= (summ * i);

	cout << summ;
}

void task_37()
{
	vector<int>a;
	vector<int>b;

	int a_size = 0;
	int b_size = 0;

	cin >> a_size;
	cin >> b_size;

	int temp = 0;

	int a_iter = 0;
	int b_iter = 0;

	for (int i = 0; i < a_size; i++)
	{
		cin >> temp;
		a.push_back(temp);
	}

	for (int i = 0; i < b_size; i++)
	{
		cin >> temp;
		b.push_back(temp);
	}

	while(true)
	{
		if (a[a_iter] <= b[b_iter])
		{
			cout << a[a_iter] << " "; // Вывод элемент массива
			a_iter++;
		}
		else if (a[a_iter] > b[b_iter])
		{
			cout << b[b_iter] << " ";
			b_iter++;
		}
		if (a_iter == a.size() && b_iter != b.size())
		{
			for (int i = b_iter; i < b_size; i++)
				cout << b[i] << " "; // Вывод остатка массива
			break;
		}
		if (b_iter == b.size() && a_iter != a.size())
		{
			for (int i = a_iter; i < a_size; i++)
				cout << a[i] << " ";
			break;
		}
	}
}

void choose_task()
{
	int x = 0;

	cout << "Введите номер задания: ";
	cin >> x;

	if (x > 37 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий 35.\nПовторите попытку.\n";
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
		case 19:
			system("cls");
			task_19();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 20:
			system("cls");
			task_20();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 21:
			system("cls");
			task_21();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 22:
			system("cls");
			task_22();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 23:
			system("cls");
			task_23();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 24:
			system("cls");
			task_24();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 25:
			system("cls");
			task_25();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 26:
			system("cls");
			task_26();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 27:
			system("cls");
			task_27();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 28:
			system("cls");
			task_28();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 29:
			system("cls");
			task_29();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 30:
			system("cls");
			task_30();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 31:
			system("cls");
			task_31();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 32:
			system("cls");
			task_32();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 33:
			system("cls");
			task_33();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 34:
			system("cls");
			task_34();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 35:
			system("cls");
			task_35();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 36:
			system("cls");
			task_36();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 37:
			system("cls");
			task_37();
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